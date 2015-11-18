#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<wait.h>

int procesos(int nProc){
  int i;
  for(i = 0; i < nProc; i++)
    if(fork() == 0)
	  return i;

}

int main(){
  int status;
  int pid;
  int num;
  int i,suma,j,x;
  int arre[100];

	printf("Numero de procesos \n");
	scanf("%d",&num);
	pid = procesos(num);

	for(i = 0; i < 100; i++){
                arre[i] = i+1;
                }

	if(pid == 0){
		
		for(j = 0; j <= num; j++){
	wait(&status);
	
	}
	printf("Soy el padre %d con pid%d \n", pid,getpid());
	exit(0);

	}else{

	for(j = ((pid-1)*10); j <= 9+((pid-1)*10); j++){
	suma += arre[j];
	printf("Soy el hijo %d con pid%d suma=%d \n", pid,getpid(),suma);
	exit(0);
	}
	printf("La suma es: %d \n", suma);
	}

}