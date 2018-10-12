#include<stdio.h> //Esto es un comentario

int main() {	/*
esto es un comentario de varias lineas
*/

//variables donde se guardaran los numeros
int numero, numerito, resultado;

//Se pide el primer valor
printf("Ingrese un valor:");
scanf("%d",&numero);
printf("El valor de su numero es: %d", numero);

//Se pide el segundo valor
printf("\nIngresa otro numerito: ");
scanf("%d", &numerito);
printf("El otro numerito es: %d\n", numerito);

resultado = numero + numerito;
printf("La suma de los numeros es: %d\n", resultado);

resultado = numero - numerito;
printf("La resta de los numeros es: %d\n", resultado);

resultado = numero * numerito;
printf("La multiplicacion de los numeros es: %d\n", resultado);

//SENTENCIA IF

	if(numero > numerito){
		printf("El primer numero es mayor que el segundo\n");
}


}
