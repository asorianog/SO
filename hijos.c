#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>

int i = 0;
int numHijos = 5;
int hijo;

int main(){

   for(i = 0; i < numHijos; i++){

    hijo = fork();


   switch (hijo){
	case -1:{printf("Error creando hijos\n");}break;
   	case 0:{printf("Proceso hijo 0 PID:\n");}break;
   	case 1:{printf("Proceso hijo 1 PID:\n");break;
   	case 2:{printf("Proceso hijo 2 PID:\n");}break;
   	case 3:{printf("Proceso hijo 3 PID:\n");}break;
   	case 4:{printf("Proceso hijo 4 PID:\n");}break;
   	default:{printf("Proceso Padre PID:\n");}break;
	}
    }
}
