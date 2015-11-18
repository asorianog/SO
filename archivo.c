#include<stdio.h>
#include<stdlib.h>


int main(){

    char cadena[10];
    char caracter;

    FILE *archivo;

    archivo = fopen("holis.txt","w");

    fprintf(archivo, "%d\n",100);
    fprintf(archivo, "%d\n",200);

    fclose(archivo);


    archivo = fopen("holis.txt","r");
    fgets(cadena,10,archivo);
    printf("%s",cadena);
    fgets(cadena,10,archivo);
    printf("%s",cadena);
    
    
    /*atoi(cadena);
    do {
        caracter = fgetc(archivo);
        printf("%c",caracter );
    }while(caracter !=EOF);
*/
    fclose(archivo);
    
    }