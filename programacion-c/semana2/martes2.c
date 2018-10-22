#include<stdio.h>

/* Programa que muestra al usuario una lista de numeros 
   desde el uno hasta el numero que indique el usuario */

int main(){
//Variables
int numero, i;

//pide al usuario el numero
printf("Ingresa un numero entero:\t");
scanf("%d", &numero);

//Lista los numeros
for (i=1; i<=numero; i++){
	printf("%d\n", i);
	
}

}
