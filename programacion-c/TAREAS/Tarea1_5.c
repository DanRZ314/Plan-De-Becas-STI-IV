#include<stdio.h>

/* Programa que pide al usuario un numero entero, un numero con 
   punto decimal y un caracter. El programa muestra lo que el usuario
   ingresa. */

int main() {
//variables
int numero1;
float numero2;
char cartr;

//Pide al usuario los valores
printf("Ingrese un numero entero: \n");
scanf(" %d", &numero1);
printf("Ingrese un numero, puede incluir decimales:\n ");
scanf(" %f", &numero2);
printf("Ingrese un caracter alfanumerico:\n ");
scanf(" %c", &cartr);

//Muestra en pantalla lo que recibio del usuario
printf("El numero entero es: %d\n", numero1);
printf("El numero con punto decimal es: %f\n", numero2);
printf("El caracter alfanumerico es: %d\n", cartr);

}
