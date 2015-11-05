#include<stdio.h>

int *apun;
int arre1[5] = {1,2,3,4,5};
int arre2[5];

int copiar(int *apunta){

int i = 0;

	for(i=0; i<5; i++){
		arre2[i] = *(apunta+i);
	}
}

int main (){


	copiar(arre1);

int i = 0;
for (i=0;i<5;i++){
	printf("%d \n",arre2[i]);
}

}
