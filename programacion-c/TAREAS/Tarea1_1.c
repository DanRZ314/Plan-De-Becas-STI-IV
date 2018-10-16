#include<stdio.h>

/*Programa que pide al usuario dos numeros enteros y realiza
  las operaciones: suma, resta, multiplicacion, division y modulo.
  Al finalizar las operaciones, el resultado se muestra en
  pantalla*/

int main(){
//variables 
int numero1, numero2, resultado;

//Se piden los valores y se guardan
printf("Ingresa un numero entero: ");
scanf(" %d", &numero1);
printf("Ingresa otro numero entero: ");
scanf(" %d", &numero2);

//Se realizan las operaciones
//Suma
resultado = numero1 + numero2;
printf("\nLa suma de los numeros es: %d", resultado);

//Resta
resultado = numero1 - numero2;
printf("\nLa resta de los numero es: %d", resultado);

//Multiplicacion
resultado = numero1 * numero2;
printf("\nLa multiplicacion de los numeros es: %d", resultado);

//Division
resultado = numero1 / numero2;
printf("\nLa division de los numeros es: %d", resultado);

//Modulo
resultado = numero1 % numero2;
printf("\n%d modulo %d es: %d\n", numero1, numero2, resultado);


}
