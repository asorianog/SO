#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>

int procesos(int nProc){
  int i;
  for(i = 0; i <= nProc; i++)
    if(fork() == 0)
	return i;
}


int main(){

  int pid;
  pid = procesos(3);
  switch(pid){
	case 0:{
	printf("Soy el padre %d con PID %d\n", pid,getpid());
	exit(0);
	}break;
   	
	case 1:{
	printf("Soy el hijo %d con PID %d\n", pid,getpid());
	exit(0);
	}break;
   	
	case 2:{
	printf("Soy el hijo %d con PID %d\n", pid,getpid());
	exit(0);
	}break;
   	
	case 3:{
	printf("Soy el hijo %d con PID %d\n", pid, getpid());
	exit(0);
	}break;
   }
}
