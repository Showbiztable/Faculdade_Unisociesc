#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <alchemy/task.h>

#define NTASKS 5

RT_TASK task[NTASKS];

// function to be executed by task
void demo(void *arg)
{
	RT_TASK_INFO curtaskinfo;

	printf("Hello World!\n");
	
	rt_task_inquire(NULL,&curtaskinfo);
	printf("Task : %s \n", curtaskinfo.name);
}

int main(int argc, char* argv[])
{
	char str[NTASKS][10];
	
	//Create task
	//Arguments: &task, name, stack size (0=default), priority, mode (FPU, start suspended, ...)
	for(int i=1;i<NTASKS;i++){
		sprintf(str[i], "Thread %i", i);		
		rt_task_create(&task[i], str[i],0,50,0);
	}

	//Start task
	//Arguments: &task, task function, function argument
	for(int i=1;i<NTASKS;i++){
		rt_task_start(&task[i], &demo, 0);
	}
}
