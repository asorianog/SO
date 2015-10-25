#include<stdio.h>

int matriz[3][3];
int **ptr;
int *apuntador;

int main(){

        matriz[0][0]=1;
        matriz[0][1]=20;
        matriz[0][2]=3;
        matriz[1][0]=4;
        matriz[1][1]=10;
        matriz[1][2]=6;
        matriz[2][0]=7;
        matriz[2][1]=8;
        matriz[2][2]=9;

        apuntador = *(matriz+2); // Se controla el primer indice de la matriz

        ptr = &apuntador;
	**ptr = matriz[0][0];

        //printf("%p \n", &matriz);
        //printf("%p \n", &(matriz+1)+2))


        printf("%d \n", *(*(matriz+1)+2));  // = 6
	printf("%d \n",*(*(ptr)));	    // = 1
	printf("%d \n",*(*(ptr)+2));	    // = 9
}

