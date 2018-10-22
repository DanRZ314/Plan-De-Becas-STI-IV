#include<stdio.h>

/*Programa que muestra todos los numero desde el uno 
  hasta el numero que indique el usuario */

int main(){
//Variables
int numero, contador=1;

//pide el numero al usuario
printf("Ingresa un numero entero:\t");
scanf("%d", &numero);

//muestra la lista de numeros

do{
	printf("%d\n", contador);
	contador ++;	
} while(contador <= numero);

}

