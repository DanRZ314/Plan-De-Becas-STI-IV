#include<stdio.h>

/* Programa que pide al usuario dos numeros enteros y 
   haciendo uso del condicional "if" muestra que 
   numero es mayor */

int main() {

//variables
int numero1, numero2;

//pide al usuario los valores
printf("Ingresa un numero entero: ");
scanf(" %d", &numero1);
printf("Ingresa otro numero entero: ");
scanf(" %d", &numero2);

//Encuetra al numero mayor
if (numero1 > numero2){
	printf("%d es mayor que %d\n", numero1, numero2);
	return 0;
} printf("%d es mayor que %d\n", numero2, numero1);
}
