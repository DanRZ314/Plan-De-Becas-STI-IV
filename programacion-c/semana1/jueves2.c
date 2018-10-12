#include<stdio.h>

/* Programa que pide al usuario cuatro numeros enteros 
   y despues muestra cual de ellos es el mayor */

int main(){

//variables
int num1, num2, num3, num4;
int num = 0;

//Pide los valores
printf("Ingresa un numero entero: ");
scanf(" %d", &num1);
printf("Ingresa un numero entero: ");
scanf(" %d", &num2);
printf("Ingresa un numero entero: ");
scanf(" %d", &num3);
printf("Ingresa un numero entero: ");
scanf(" %d", &num4);

//Compara los numeros para encontrar al mayor
if (num < num1){
	num = num1;
}
if (num < num2){
	num =num2;
}
if (num < num3){
	num = num3;
}
if (num < num4){
	num = num4;
}
printf("El numero mayor es: %d\n", num);
}
