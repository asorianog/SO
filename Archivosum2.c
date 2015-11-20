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

	int pid, num, i, k, suma, j, status;
	int arre[100];
	FILE *fl;
	char str[10];

	printf("Numero de procesos \n");
	scanf("%d",&num);
	fl = fopen ("Prueba.txt", "w");
	fprintf(fl, "3\n");
	fprintf(fl, "5\n");
	fprintf(fl, "9\n");
	fclose(fl);
	pid = procesos(num);

	if(pid == 0){	
	for(k = 0; k <= num; k++){
	wait(&status);
	}
	
	printf("Soy el padre %d con pid%d \n", pid,getpid());
	exit(0);

	}else{
	
	fl = fopen ("Prueba.txt", "r");
	//*
	for(j = (pid); j <= 10; j++){
	
	while (!feof(fl)){
     fgets(str, 10, fl);
     if (!feof(fl)){        
        i = atoi(str);	
        //printf("Soy el hijo %d con pid%d %d\n", pid,getpid(),i);
        if (i == j ){
        		printf("Soy el hijo %d con pid%d %d Hola\n", pid,getpid(),i);
        		}
    		}
    	}
  	}  		
}
	fclose(fl);
	//printf("Soy el hijo %d con pid%d %d\n", pid,getpid(),i);
	exit(0);

	}
//for(j = ((pid-1)*10); j <= 9+((pid-1)*10); j++){