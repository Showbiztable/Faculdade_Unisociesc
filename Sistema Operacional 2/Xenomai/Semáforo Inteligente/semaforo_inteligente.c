#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <task.h>
#include <sem.h>
#include <mutex.h>

#define CLOCK_RES 1e-9
#define LIMITE_DA_FILA 4

RT_MUTEX mutex_filas;
RT_SEM g_t;

RT_TASK geradora_de_transito;
RT_TASK medicao_da_fila;
RT_TASK gerenciadora;
RT_TASK consumo;

//[sem1, sem2, sem3, ..., semN]
//[fila1=n, fila2=n, fila3=n, ..., filaN=m]

int fila_de_carros[LIMITE_DA_FILA];
int quantidade_de_carros[LIMITE_DA_FILA];
int index_do_semaforo_da_fila = 0;
int quantidade_de_carros_saindo_por_vez = 2;

int tempo_anterior_thread_1 = 0;
int tempo_anterior_thread_2 = 0;
int tempo_anterior_thread_3 = 0;
int tempo_anterior_thread_4 = 0;

void gerar_carros(void *arg)
{
	rt_task_set_periodic(NULL, TM_NOW, 4e8);	
	srand(time(NULL)); //Necessauro para gerar números aleatórios
	
	while(1){
		int tempo_atual_do_sistema = rt_timer_read();
		//printf("Tempo do sistema: %d\n", tempo_atual_do_sistema);

		if(tempo_atual_do_sistema - tempo_anterior_thread_1 > 4e8){
			tempo_anterior_thread_1 = tempo_atual_do_sistema;

			int numero_aleatorio_de_carros = 1 + (rand() % 3);
			int fila_aleatoria = (rand() % LIMITE_DA_FILA);

			//seção crítica
			rt_mutex_acquire(&mutex_filas,TM_INFINITE);

			fila_de_carros[fila_aleatoria] += numero_aleatorio_de_carros;			
			printf("Carros que chegaram na fila %d: %d \n", fila_aleatoria, numero_aleatorio_de_carros);

			rt_mutex_release(&mutex_filas);
			//libera seção crítica

			printf("Fila: %d, Nº de Carros: %d\n", fila_aleatoria, fila_de_carros[fila_aleatoria]);
		}    

		rt_task_wait_period(NULL);
	}
}

void ler_fila(void *arg)
{
	rt_task_set_periodic(NULL, TM_NOW, 1e8);

	while(1){   
		int tempo_atual_do_sistema = rt_timer_read();

		if(tempo_atual_do_sistema - tempo_anterior_thread_2 > 1e8){
			tempo_anterior_thread_2 = tempo_atual_do_sistema;

			for(int i = 0; i < LIMITE_DA_FILA; i++){
				quantidade_de_carros[i] += fila_de_carros[i];
			}

			printf("Leu as filas\n");
		}    

		rt_task_wait_period(NULL);
	}
}

void abrir_semaforo(void *arg)
{
	rt_task_set_periodic(NULL, TM_NOW, 2e8);
	
	while(1){      
		int tempo_atual_do_sistema = rt_timer_read();
		int numero_max = quantidade_de_carros[0];

		if(tempo_atual_do_sistema - tempo_anterior_thread_3 > 2e8){
			tempo_anterior_thread_3 = tempo_atual_do_sistema;

			for(int i = 0; i < LIMITE_DA_FILA; ++i){        
				if(quantidade_de_carros[i] >= numero_max){
					numero_max = quantidade_de_carros[i];
					index_do_semaforo_da_fila = i;
				}            
			}      

			printf("Semaforo que ira abrir: %d\n", index_do_semaforo_da_fila);
		}    

		rt_task_wait_period(NULL);
	}
}

void fluxo(void *arg)
{
	RTIME inicio, fim;
	rt_task_set_periodic(NULL, TM_NOW, 5e7);
	
	while(1){
		inicio = rt_timer_read();
		int tempo_atual_do_sistema = rt_timer_read();

		if(tempo_atual_do_sistema - tempo_anterior_thread_4 > 5e7){
			tempo_anterior_thread_4 = tempo_atual_do_sistema;

			rt_mutex_acquire(&mutex_filas,TM_INFINITE);

			if(quantidade_de_carros[index_do_semaforo_da_fila] == 0){
				printf("Fila: %d, Zerada\n", index_do_semaforo_da_fila);
			}
			else if(quantidade_de_carros[index_do_semaforo_da_fila] > quantidade_de_carros_saindo_por_vez){
				quantidade_de_carros[index_do_semaforo_da_fila] -= quantidade_de_carros_saindo_por_vez;
				fila_de_carros[index_do_semaforo_da_fila] -= quantidade_de_carros_saindo_por_vez;

				printf("Fila: %d, Sobrou: %d\n", index_do_semaforo_da_fila, quantidade_de_carros[index_do_semaforo_da_fila]);
			}
			else{
				quantidade_de_carros[index_do_semaforo_da_fila] = 0;
				fila_de_carros[index_do_semaforo_da_fila] = 0;

				printf("Fila: %d, Sobrou: %d\n", index_do_semaforo_da_fila, quantidade_de_carros[index_do_semaforo_da_fila]);

				fim = rt_timer_read();
				/*printf("%ld.%06ld;", (long)(fim - inicio) / 1000000,
														 (long)(fim - inicio) % 1000000), "\n";*/

			} 

			rt_mutex_release(&mutex_filas);	

			printf("Fila: %d, Sobrou: %d\n", index_do_semaforo_da_fila, quantidade_de_carros[index_do_semaforo_da_fila]);
		}
		
		rt_task_wait_period(NULL);
	}
}

int main(int argc, char* argv[])
{
	printf("start task\n");

	int err = rt_mutex_create(&mutex_filas,"Mutex_Filas");

	rt_task_create(&geradora_de_transito, "thread_1", 0, 50, 0);
	rt_task_create(&medicao_da_fila, "thread_2", 0, 40, 0);
	rt_task_create(&gerenciadora, "thread_3", 0, 30, 0);
	rt_task_create(&consumo, "thread_4", 0, 20, 0);

	rt_task_start(&geradora_de_transito, &gerar_carros, 0);
	rt_task_start(&medicao_da_fila, &ler_fila, 0);
	rt_task_start(&gerenciadora, &abrir_semaforo, 0);
	rt_task_start(&consumo, &fluxo, 0);

	pause();
	return 0;
}
