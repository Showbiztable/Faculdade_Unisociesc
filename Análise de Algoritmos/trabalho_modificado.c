#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <alchemy/task.h>
//#include <conio.h>

#define CLOCK_RES 1e-9
#define LIMITE_DA_FILA 4

RT_TASK geradora_de_transito;
RT_TASK medicao_da_fila;
RT_TASK gerenciadora;
RT_TASK consumo;

//int *vias_de_rolamento; //Ponteiro para vetor dinâmico
//int contador, numero_de_carros;
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
  rt_task_set_periodic(NULL, TM_NOW, 4000000);
  
  srand(time(NULL)); //Necessauro para gerar números aleatórios
  
  while(1){
    int tempo_atual_do_sistema = rt_timer_read();
    //printf("Tempo do sistema: %d\n", tempo_atual_do_sistema);

    if(tempo_atual_do_sistema - tempo_anterior_thread_1 > 400000000){
      tempo_anterior_thread_1 = tempo_atual_do_sistema;

      int numero_aleatorio_de_carros = 1 + (rand() % 3);
      int fila_aleatoria = (rand() % LIMITE_DA_FILA);
      fila_de_carros[fila_aleatoria] += numero_aleatorio_de_carros;

      //printf("Carros que chegaram na fila : %d", numero_aleatorio_de_carros);
      printf("Fila: %d, Nº de Carros: %d\n", fila_aleatoria, fila_de_carros[fila_aleatoria]);
    }    

    rt_task_wait_period(NULL);
  }
}

void ler_fila(void *arg)
{
  rt_task_set_periodic(NULL, TM_NOW, 1000000);
  
  while(1){   
    int tempo_atual_do_sistema = rt_timer_read();

    if(tempo_atual_do_sistema - tempo_anterior_thread_2 > 100000000){
      tempo_anterior_thread_2 = tempo_atual_do_sistema;

      for (int i = 0; i < LIMITE_DA_FILA; i++){
        quantidade_de_carros[i] += fila_de_carros[i];
      }

      printf("Leu as filas\n");
    }

    rt_task_wait_period(NULL);
  }
}

void abrir_semaforo(void *arg)
{
  rt_task_set_periodic(NULL, TM_NOW, 2000000);
  
  while(1){      
    int tempo_atual_do_sistema = rt_timer_read();
    int numero_max = quantidade_de_carros[0];

    if(tempo_atual_do_sistema - tempo_anterior_thread_3 > 200000000){
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
  rt_task_set_periodic(NULL, TM_NOW, 500000);
  
  while(1){
    int tempo_atual_do_sistema = rt_timer_read();

    if(tempo_atual_do_sistema - tempo_anterior_thread_4 > 50000000){
      tempo_anterior_thread_4 = tempo_atual_do_sistema;

      if (quantidade_de_carros[index_do_semaforo_da_fila] == 0)
      {
        printf("Fila: %d, Zerada\n", index_do_semaforo_da_fila);
      }
      else if(quantidade_de_carros[index_do_semaforo_da_fila] > quantidade_de_carros_saindo_por_vez){
        quantidade_de_carros[index_do_semaforo_da_fila] -= quantidade_de_carros_saindo_por_vez;
        fila_de_carros[index_do_semaforo_da_fila] -= quantidade_de_carros_saindo_por_vez;

        printf("Fila: %d, Sobrou: %d\n", index_do_semaforo_da_fila, quantidade_de_carros[index_do_semaforo_da_fila]);
      }
      else{
        //quantidade_de_carros[index_do_semaforo_da_fila] += (quantidade_de_carros_saindo_por_vez - quantidade_de_carros[index_do_semaforo_da_fila]);
        //fila_de_carros[index_do_semaforo_da_fila] += (quantidade_de_carros_saindo_por_vez - fila_de_carros[index_do_semaforo_da_fila]);

        quantidade_de_carros[index_do_semaforo_da_fila] = 0;
        fila_de_carros[index_do_semaforo_da_fila] = 0;

        printf("Fila: %d, Sobrou: %d\n", index_do_semaforo_da_fila, quantidade_de_carros[index_do_semaforo_da_fila]);
      } 

      //printf("Antes: %d, Depois: %d\n", (quantidade_de_carros[index_do_semaforo_da_fila] + quantidade_de_carros_saindo_por_vez), quantidade_de_carros[index_do_semaforo_da_fila]);
      //printf("Antes: %d, Depois: %d\n", (fila_de_carros[index_do_semaforo_da_fila] + quantidade_de_carros_saindo_por_vez), fila_de_carros[index_do_semaforo_da_fila]);
      //printf("Fila: %d, Sobrou: %d\n", index_do_semaforo_da_fila, quantidade_de_carros[index_do_semaforo_da_fila]);
    }
    
    rt_task_wait_period(NULL);
  }
}

int main(int argc, char* argv[])
{
  printf("start task\n");

  //printf("Informe o número de pistas no cruzamento\n");
  //scanf("%d", &numero_de_carros);
    /* ------------- Alocando dinamicamente o espaço necessário -------------
  
  1 - Calcular o número de bytes necessários
  primeiramente multiplicamos o número de componentes do vetor pela
  quantidade de bytes que é dada pelo comando sizeof,
  portanto temos:
  num_componentes * sizeof(float)
  
  2 - Reservar a quantidade de memória
  usamos malloc para reservar essa quantidade de memória,
  então temos:
  malloc(num_componentes * sizeof(float))
  
  3 - Converter o ponteiro para o tipo de dados desejado
  como a função malloc retorna um ponteiro do tipo void,
  precisamos converter esse ponteiro para o tipo da nossa variável, no caso float,
  por isso usamos o comando de conversão explicita:
  (float *)
  
  4 - juntando tudo e atribuindo em v temos o comando abaixo: */
  
  //Create task
  //Arguments: &task,  name, stack size (0=default), priority, mode (FPU, start suspended, ...)
  
  //vias_de_rolamento = (int *) malloc(numero_de_carros * sizeof(int));

  rt_task_create(&geradora_de_transito, "thread_1", 0, 50, 0);
  rt_task_create(&medicao_da_fila, "thread_2", 0, 40, 0);
  rt_task_create(&gerenciadora, "thread_3", 0, 30, 0);
  rt_task_create(&consumo, "thread_4", 0, 20, 0);

  //Start task
  //Arguments: &task, task function,  function argument

  rt_task_start(&geradora_de_transito, &gerar_carros, 0);
  rt_task_start(&medicao_da_fila, &ler_fila, 0);
  rt_task_start(&gerenciadora, &abrir_semaforo, 0);
  rt_task_start(&consumo, &fluxo, 0);

  pause();
  return 0;
}

