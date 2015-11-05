#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>

int arreglo[5] = {1,2,3,4,5};

int i, j;
int pares, impares;

int main(){

        i = 0;
        j = 0;
        pares=impares=0;
        switch(fork()){

        case -1:
        {
        printf("Hubo problemas al crear el proceso\n");
        }
        case 0://codigo proceso hijo
        {
	arreglo[0] = 10;
        arreglo[1] = 20;
        arreglo[2] = 30;
        arreglo[3] = 40;
        arreglo[4] = 50;

        }break;
        default: //Codigo del proceso Padre
        {
        while(j<5)
        {
                 impares += arreglo[j];
               j++;
	}
        printf("Impares = %d \n", impares);
        }break;
    }
	for(i = 0; i < 5; i++)
	printf("%d ", arreglo[i]);
	printf("\n");
}

