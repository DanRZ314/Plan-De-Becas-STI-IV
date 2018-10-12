#include<stdio.h>

/*Programa que pide al usuario una letra y 
  muestra si la letra es una consonante o una
  vocal*/

int main(){
//variables
char letra;

//Pide al usuario una letra
printf("Ingresa una letra: %c");
scanf(" %c", &letra);

//Verifica si la letra es una vocal o una consonate
switch (letra){
case 'a':
	printf("Es una vocal\n");
	break;
case 'e':
	printf("Es una vocal\n");
	break;
case 'i':
	printf("Es una vocal\n");
	break;
case 'o':
	printf("Es una vocal\n");
	break;
case 'u':
	printf("Es una vocal\n");
	break;
default:
	printf("Es una consonante\n");
}

}
