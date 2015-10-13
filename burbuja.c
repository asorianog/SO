#include<stdio.h>


int burbuja(int *arreglo, int tam){
int i,j, temp;
	for (i = 0; i < tam -1; i++)
		for(j = i+1; j < tam; j++)
			if (arreglo[i] > arreglo[j]){
				temp = arreglo[i];
				arreglo[i] = arreglo[j];
				arreglo[j] = temp;
	}
}
void imprimir (int *arreglo, int tam){
int i = 0;
for(i=0; i < tam; i++)
printf("arreglo [%d] = %d\n", i,*(arreglo+i));

}

int main(){

	int arreglo[8];

	arreglo[0] = 9;
        arreglo[1] = 5;
        arreglo[2] = 7;
        arreglo[3] = 12;
        arreglo[4] = 1;
        arreglo[5] = 22;
        arreglo[6] = 15;
        arreglo[7] = 100;

//	imprimir(arreglo,5);
	burbuja(arreglo,8);
        imprimir(arreglo,8);
}
