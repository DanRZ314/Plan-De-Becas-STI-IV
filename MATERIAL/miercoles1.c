#include<stdio.h>  //Esto es un comentario

int main(){    /*
esto es un comentario
de varias lineas
*/

int numero, numero2,resultado;

printf("Ingrese el valor1:");
scanf("%d", &numero);                 //el primer numero en ingresarse se guarda aqui



printf("Ingrese el valor2:");
scanf("%d", &numero2);
printf("El valor de su numero es: %d\n",numero);
printf("El valor de su numero2 es: %d\n",numero2);

resultado = numero + numero2;

printf("La suma de los numeros es: %d\n",resultado);

resultado = numero - numero2;

printf("La resta de los numeros es: %d\n",resultado);


resultado = numero * numero2;

printf("La multiplicacion de los numeros es: %d\n",resultado);

	if (numero > numero2 ){

	printf("\n\n");
	printf("El primer numero es mayor que el segundo\n");
	}

}
