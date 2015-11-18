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

	/*fl = fopen ("Prueba.txt", "w");
	fprintf(fl, "%d\n", 100);
	fclose(fl);
*/
	/*fl = fopen ("Prueba.txt", "r");
	fgets (str, 60, fl);
	puts(str);
	fclose(fl);
*/

	printf("Numero de procesos \n");
	scanf("%d",&num);
	pid = procesos(num);

	for(i = 0; i < 100; i++){
                arre[i] = i+1;
        }

	if(pid == 0){	
	for(k = 0; k <= num; k++){
	wait(&status);
	}
	
	fl = fopen ("Prueba.txt", "r");
	while (!feof(fl)) {
     fgets(str, 10, fl);
     if (!feof(fl))        
        puts(str);
        suma += atoi(str);
        printf("%d\n", suma);  
  }  
	fclose(fl);
	printf("Soy el padre %d con pid%d \n", pid,getpid());
	exit(0);
	}else{

	for(j = ((pid-1)*10); j <= 9+((pid-1)*10); j++){
	suma += arre[j];
	}
	fl = fopen ("Prueba.txt", "a+");
	fprintf(fl, "%d\n", suma);
	fclose(fl);
	printf("Soy el hijo %d con pid%d y la suma: %d \n", pid,getpid(),suma);
	exit(0);
	}

}
