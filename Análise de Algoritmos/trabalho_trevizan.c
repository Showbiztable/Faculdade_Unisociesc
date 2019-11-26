#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

#include <alchemy/task.h>

RT_TASK geradora_de_transito;
RT_TASK medicao_da_fila;
RT_TASK gerenciadora;
RT_TASK consumo;

int fila_de_carros[1][4];
int quantidade_de_carros[4];
int numero_max = quantidade_de_carros[0];
int index_do_semaforo_da_fila = 0;
int quantidade_de_carros_saindo_por_vez = 3;

// fazer uma matriz de alocação dinâmica
/*void helloWorld(void *arg)
{
  RT_TASK_INFO curtaskinfo;

  printf("Hello World!\n");

  // inquire current task
  rt_task_inquire(NULL,&curtaskinfo);

  // print task name
  printf("Task name : %s \n", curtaskinfo.name);
}*/

void gerar_carros(void *arg)
{
  rt_task_set_periodic(NULL, TM_NOW, 4000000);
  
  srand(time(NULL)); //Necessauro para gerar números aleatórios
  
  while(1){   
    for (int i = 0; i < 4; i++){
        fila_de_carros[0][i] += 1 + (rand() % 4);
  }
      
    rt_task_wait_period(NULL);
  }
  return;
}

void ler_fila(void *arg)
{
  rt_task_set_periodic(NULL, TM_NOW, 1000000);
  
  while(1){   
    for (int i = 0; i < 4; i++){
        quantidade_de_carros[i] += fila_de_carros[0][i];
  }
  
    rt_task_wait_period(NULL);
  }
  return;
}

void abrir_semaforo(void *arg)
{
  rt_task_set_periodic(NULL, TM_NOW, 2000000);
  
  while(1){   
  // Busca o elemento máximo    
    for (int i = 0; i < 4; ++i){
    if(quantidade_de_carros[i] >= numero_max){
      numero_max = quantidade_de_carros[i];
      index_do_semaforo_da_fila = i;
    }            
  }      
   
    rt_task_wait_period(NULL);
  }
  return;
}

void fluxo(void *arg)
{
  rt_task_set_periodic(NULL, TM_NOW, 500000);
  
  while(1){   
    quantidade_de_carros[index_do_semaforo_da_fila] -= quantidade_de_carros_saindo_por_vez;
  
    rt_task_wait_period(NULL);
  }
  return;
}

int main(int argc, char* argv[])
{
  printf("start task\n");
  //sprintf(str,"hello");
  
  /* Create task
   * Arguments: &task,
   *            name,
   *            stack size (0=default),
   *            priority,
   *            mode (FPU, start suspended, ...)
   */  
  rt_task_create(&geradora_de_transito, "thread_1", 0, 50, 0);
  rt_task_create(&medicao_da_fila, "thread_2", 0, 50, 0);
  rt_task_create(&gerenciadora, "thread_3", 0, 50, 0);
  rt_task_create(&consumo, "thread_4", 0, 50, 0);

  /*  Start task
   * Arguments: &task,
   *            task function,
   *            function argument
   */
  rt_task_start(&geradora_de_transito, &gerar_carros, 0);
  rt_task_start(&medicao_da_fila, &ler_fila, 0);
  rt_task_start(&gerenciadora, &abrir_semaforo, 0);
  rt_task_start(&consumo, &fluxo, 0);
  pause();
}
