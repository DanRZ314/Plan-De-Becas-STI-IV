#include<stdio.h>
/* Programa que imprime los n numero que el usuario ingrese.
   Muestra uno en cada renglon. */

int main(){

//Variables
int numero;
int auxiliar = 1;

//Pide al usuario que ingrese un numero entero
printf("Ingresa un numero entero: \t");
scanf(" %d", &numero);
printf("\n");

while(auxiliar <= numero){
printf("\t %d\n", auxiliar);
auxiliar ++;
}

}
