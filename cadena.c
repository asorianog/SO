	#include<stdio.h>

char cadena[10] = {"Hola mundo"};
int arreglo[10] = {0,1,2,3,4,5,6,7,8,9};
char *cadena1 = "Hola mundo mas largo";
char *meses[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio",
"Agosto","Septiembre","Octubre","Noviembre","Diciembre"};

int i,j;
char *aux;

int main (){

	for (i = 0; i < 12; i++){
	j = 0;
	aux = meses[i];
	while(*(aux+j) != '\0'){

	j++;
}
printf("%c",*(aux+j-3));
printf("%c",*(aux+j-2));
printf("%c",*(aux+j-1));
printf("\n");
}

}
