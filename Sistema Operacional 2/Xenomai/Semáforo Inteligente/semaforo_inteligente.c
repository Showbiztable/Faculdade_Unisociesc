#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <task.h>
#include <sem.h>
#include <mutex.h>
#include <timer.h>

#define CLOCK_RES 1e-9
#define LIMITE_DA_FILA 4

RT_MUTEX mutex_filas;
RT_SEM sem_fluxo;

struct Fila{
	int num_carros;
	RT_SEM semaforo;
}filas[LIMITE_DA_FILA];

RT_TASK geradora_de_transito;
RT_TASK medicao_da_fila;
RT_TASK gerenciadora;
RT_TASK consumo;

//[sem1,sem2,sem3,...,semN]
//[fila1=n,fila2=n,fila3=n,...,filaN=m]

int fila_de_carros[LIMITE_DA_FILA];
int quantidade_de_carros[LIMITE_DA_FILA];
int index_do_semaforo_da_fila = 0;
int quantidade_de_carros_saindo_por_vez = 2;

int tempo_anterior_thread_1 = 0;
int tempo_anterior_thread_2 = 0;
int tempo_anterior_thread_3 = 0;
int tempo_anterior_thread_4 = 0;

void gerar_carros(void *arg)//tempo = 800 ns ou fim - inicio = 0.000800+-
{
	RTIME inicio, fim;

	rt_task_set_periodic(NULL, TM_NOW, 4e8);  
	srand(time(NULL));//Necessauro para gerar números aleatórios

	//fim = rt_timer_read();
	while(1){
		int tempo_atual_do_sistema = rt_timer_read();
		inicio = rt_timer_read();

		//printf("Tempo do sistema: %d\n", tempo_atual_do_sistema);

		if(tempo_atual_do_sistema - tempo_anterior_thread_1 > 4e8){
			tempo_anterior_thread_1 = tempo_atual_do_sistema;

			int numero_aleatorio_de_carros = 1 + (rand() % 3);
			int fila_aleatoria = (rand() % LIMITE_DA_FILA);
			filas[fila_aleatoria].num_carros += numero_aleatorio_de_carros;
			
			printf("Carros que chegaram na fila %d: %d \n", fila_aleatoria, numero_aleatorio_de_carros);
			printf("Fila: %d, Nº de Carros: %d\n", fila_aleatoria, filas[fila_aleatoria].num_carros);
		}    

		fim = rt_timer_read();
		//printf("TEMPO DO GERAR CARROS: %ld.%06ld; \n", (long)(fim - inicio));// / 1000000,(long)(fim - inicio) % 1000000); assim fica em +-800.0002 ns??
		//printf("TEMPO DO GERAR CARROS: %ld.%06ld; \n", (long)(inicio-fim) / 1000000,(long)(inicio-fim) % 1000000);
		//fim = inicio;

		rt_task_wait_period(NULL);
	}
}

void ler_fila(void *arg)//tempo = fim - inicio = 5000ns ou 0,005ms
{
	RTIME inicio, fim;
	int i=0;

	rt_task_set_periodic(NULL, TM_NOW, 1e8);
	
	while(1){   
		//inicio = rt_timer_read();
		int tempo_atual_do_sistema = rt_timer_read();
	
		if(tempo_atual_do_sistema - tempo_anterior_thread_2 > 1e8){
			tempo_anterior_thread_2 = tempo_atual_do_sistema;
	
			for (i = 0; i < LIMITE_DA_FILA; i++){
				rt_sem_p(&filas[i].semaforo,TM_NONBLOCK);  

				quantidade_de_carros[i] = filas[i].num_carros;		
				printf("___%d___ ",filas[i].num_carros);

				rt_sem_v(&filas[i].semaforo);
			}

			printf("\n"); 
		}

		fim = rt_timer_read();
		//printf("TEMPO DO LER FILAS: %ld.%06ld; \n", (long)(fim - inicio));// / 1000000, (long)(fim - inicio) % 1000000);

		rt_task_wait_period(NULL);
	}
}

void abrir_semaforo(void *arg)//tempo = fim - inicio = varia entre 2000 a 8000 ns com o printf()
{
	RTIME inicio, fim;
	rt_task_set_periodic(NULL, TM_NOW, 2e8);
	
	while(1){      
		//rt_sem_p(&sem_fluxo,0);

		inicio = rt_timer_read();
		int tempo_atual_do_sistema = rt_timer_read();
	
		if(tempo_atual_do_sistema - tempo_anterior_thread_3 > 2e8){
			tempo_anterior_thread_3 = tempo_atual_do_sistema;

			rt_mutex_acquire(&mutex_filas,0);
			int numero_max = quantidade_de_carros[0];

			for(int i = 0; i < LIMITE_DA_FILA; ++i){
				if(quantidade_de_carros[i] >= numero_max){
					numero_max = quantidade_de_carros[i];
					index_do_semaforo_da_fila = i;
				}       
			}

			printf("Semaforo que ira abrir: %d\n", index_do_semaforo_da_fila);

			rt_mutex_release(&mutex_filas);
			rt_sem_v(&sem_fluxo);
		}   

		fim = rt_timer_read();
		//printf("TEMPO DO ABRIR SEMAFORO: %ld.%06ld; \n", (long)(fim - inicio));// / 1000000,(long)(fim - inicio) % 1000000);

		rt_task_wait_period(NULL);
	}
}

void fluxo(void *arg) //tempo varia entre 9000 da primeira vez e 600 na segunda
{
	RTIME inicio, fim;
	rt_task_set_periodic(NULL, TM_NOW, 4e8);
	
	while(1){	
		inicio = rt_timer_read();	
		int tempo_atual_do_sistema = rt_timer_read();

		if(tempo_atual_do_sistema - tempo_anterior_thread_4 > 4e8){
			tempo_anterior_thread_4 = tempo_atual_do_sistema;

			rt_sem_p(&sem_fluxo,TM_INFINITE);
			//rt_sem_p(&filas[index_do_semaforo_da_fila].semaforo,TM_INFINITE);	
			//rt_mutex_acquire(&mutex_filas,0);

			if (quantidade_de_carros[index_do_semaforo_da_fila] == 0){  
				printf("Fila: %d, Zerada\n", index_do_semaforo_da_fila);
			}
			else if(quantidade_de_carros[index_do_semaforo_da_fila] > quantidade_de_carros_saindo_por_vez){ 
				quantidade_de_carros[index_do_semaforo_da_fila] -= quantidade_de_carros_saindo_por_vez;
				filas[index_do_semaforo_da_fila].num_carros -= quantidade_de_carros_saindo_por_vez;

				//printf("Fila: %d, Sobrou: %d\n", index_do_semaforo_da_fila, quantidade_de_carros[index_do_semaforo_da_fila]);
				//rt_sem_v(&filas[index_do_semaforo_da_fila].semaforo);
			}
			else{
				quantidade_de_carros[index_do_semaforo_da_fila] = 0;
				filas[index_do_semaforo_da_fila].num_carros = 0;
				printf("Fila: %d, Sobrou: %d\n", index_do_semaforo_da_fila, quantidade_de_carros[index_do_semaforo_da_fila]);
			}

			printf("Antes: %d, Depois: %d\n", (quantidade_de_carros[index_do_semaforo_da_fila] + quantidade_de_carros_saindo_por_vez), quantidade_de_carros[index_do_semaforo_da_fila]);
			printf("Antes: %d, Depois: %d\n", (filas[index_do_semaforo_da_fila].num_carros + quantidade_de_carros_saindo_por_vez), filas[index_do_semaforo_da_fila].num_carros);
			printf("Fila: %d, Sobrou: %d\n", index_do_semaforo_da_fila, quantidade_de_carros[index_do_semaforo_da_fila]);

			//rt_mutex_release(&mutex_filas);  
		}

		fim = rt_timer_read();
		//printf("TEMPO DO FLUXO: %ld.%06ld; \n", (long)(fim - inicio));// / 1000000,(long)(fim - inicio) % 1000000);
	
		//rt_mutex_release(&mutex_filas);
		//rt_sem_v(&sem_fluxo);
		rt_task_wait_period(NULL);
	}
}

int main(int argc, char* argv[])
{
	int err = rt_mutex_create(&mutex_filas,"Mutex_Filas");

	rt_task_create(&geradora_de_transito, "thread_1", 0, 50, 0);
	rt_task_create(&medicao_da_fila, "thread_2", 0, 40, 0);
	rt_task_create(&gerenciadora, "thread_3", 0, 30, 0);
	rt_task_create(&consumo, "thread_4", 0, 20, 0);
	
	for(int i=0;i<LIMITE_DA_FILA-1;i++){
		rt_sem_create(&filas[i].semaforo, "Semaforo", 1, S_PRIO);
	}

	rt_sem_create(&sem_fluxo, "Semaforo", 0, S_PRIO);

	rt_task_start(&geradora_de_transito, &gerar_carros, 0);
	rt_task_start(&medicao_da_fila, &ler_fila, 0);
	rt_task_start(&gerenciadora, &abrir_semaforo, 0);
	rt_task_start(&consumo, &fluxo, 0);

	pause();
	return 0;
}
