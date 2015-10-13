#include<stdio.h>
#include<stdlib.h>

int tam (char *);

int tam (char *cadena){

int i,j;

	for (i = 0;i < *cadena;i++){
        	j = 0;
        	while(*(cadena+j) != '\0'){
        	j++;
		}
	}

        printf("%d\n",j);
}


int main(){

char *cadena = "Hola";
char *meses[1] = {"Enero"};
char cadena1[30];
	tam(cadena);
	//tam(*meses);

printf("Ingrese una cadena: \n");
fflush(stdin);
scanf("%s", cadena1);

	tam(cadena1);

}
