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
  int i,suma,j,x;
  int arre[1000];



	printf("Numero de procesos \n");
	scanf("%d",&num);
	pid = procesos(num);

	for(i = 0; i < 1000; i++){
                arre[i] = i+1;
                }

	if(pid == 0){

	printf("Soy el padre %d con pid%d \n", pid,getpid());

	}else{

	printf("Soy el hijo %d con pid%d \n", pid,getpid());

	for(j = ((pid-1)*100); j <= 99+((pid-1)*100); j++){
	suma += arre[j];
	}
	printf("La suma es: %d \n", suma);
	}

}
