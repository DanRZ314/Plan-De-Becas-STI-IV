#include<stdio.h>
#include<string.h>

int main(){

//Variables
char cadena1[5]= "HOLA";
char cadena2[5]= "ADIOS";
char cadena3[]="Esta es otra cadena";
char cadena4[40];

printf("Su cadena4 contiene: %s\n", cadena4); //copia toda la cadena1 a cadena4
strcpy(cadena4,cadena1);

printf("Su cadena4 contiene: %s\n", cadena4);

strncpy(cadena4, cadena2, 3); //copia solo 3 caracteres de cadena1 a cadena4
printf("Su cadena4 contiene: %s\n", cadena4);

//strcat(cadena1, cadena2); une a cadena1 la cadena2
printf("cadena concatenada: %s\n", strcat(cadena1,cadena2));

printf("cadena1: %s\n", cadena1);
printf("cadena2: %s\n", cadena2);
printf("EL tamanio de su cadena es %d\n", strlen(cadena1));

char CADENA1[]="PALABRA1";
char CADENA2[]="PALABRA2";

printf("Sus cadenas tienen la relacion %d\n", strcmp(CADENA1, CADENA2));  //compara cadenas
printf("Sus cadenas tienen la relacion %d\n", strncmp(CADENA1, CADENA2, 3));  //compara cadenas hasta la entrada n

}
