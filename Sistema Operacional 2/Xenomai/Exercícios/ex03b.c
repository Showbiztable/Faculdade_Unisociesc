#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <alchemy/task.h>
#include <alchemy/timer.h>
#include <alchemy/sem.h>

#define ITER 10

static RT_TASK t1;
static RT_TASK t2;

RT_SEM s_t1, s_t2;

int global = 0;

void taskOne(void *arg)
{
	int i;

	for(i=0; i < ITER; i++){
		rt_sem_p(&s_t1, TM_INFINITE);

		printf("I am taskOne and global = %d................\n", ++global);

		rt_sem_v(&s_t2);
	}
}

void taskTwo(void *arg)
{
	int i;

	for(i=0; i < ITER; i++){
		rt_sem_p(&s_t2, TM_INFINITE);

		printf("I am taskTwo and global = %d----------------\n", --global);

		rt_sem_v(&s_t1);
	}
}

int main(int argc, char* argv[])
{
	rt_sem_create(&s_t1, "semaforo_1", 1, 0);
	rt_sem_create(&s_t2, "semaforo_2", 0, 0);

	rt_task_create(&t1, "task1", 0, 1, 0);
	rt_task_create(&t2, "task2", 0, 1, 0);

	rt_task_start(&t1, &taskOne, 0);
	rt_task_start(&t2, &taskTwo, 0);

	return 0;
} 
