#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
//#include<wait.h>
#include<sys/wait.h>

int procesos(int nProc){
	int i;
	for(i = 1; i<=nProc; i++)
		if(fork() == 0)
			return i;
		return 0;
}

int main(){
	int pid,num,j;
	int status;
	
	printf("Numero de procesos \n");
	scanf("%d",&num);
	pid = procesos(num);


	if(pid == 0){
	
	for(j = 0; j <= num; j++){
	wait(&status);
	
	}
	printf("Soy el padre %d con pid%d \n", pid,getpid());
	exit(0);

	}else{

	printf("Soy el hijo %d con pid%d \n", pid,getpid());
	exit(0);

	}
	return 0;
}
	
