#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>

int procesos(int nProc){
  int i;
  for(i = 0; i < nProc; i++)
    if(fork() == 0)
	return i;
}


int main(){

  int pid;
  int num;

	printf("Ingrese el numero de procesos\n");
	scanf("%d",&num);
	pid = procesos(num);

	if(pid == 0)
	printf("Soy el padre %d con pid%d \n", pid,getpid());
	else
	printf("Soy el hijo %d con pid%d \n", pid,getpid());
}
