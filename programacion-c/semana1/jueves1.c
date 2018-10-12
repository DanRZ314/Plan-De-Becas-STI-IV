#include<stdio.h>

/*Programa que pide al usuario una letra y muestra
  si el caracter es una vocal o una consonante */

  
int main(){

//variable
char letrita;

//Pide al usuario la letra
printf("Ingresa una letra: ");
scanf(" %c", &letrita);

//Verifica si es consonante o vocal
	if (letrita == 'a'){
		printf("Es una vocal\n");
	} else if (letrita == 'e'){
	      printf("Es una vocal\n");
	  } else if (letrita == 'i'){
		printf("Es una vocal\n");
	    } else if (letrita == 'o'){
		  printf("Es una vocal\n");
	      } else if (letrita == 'u'){
		    printf("Es una vocal\n");
		} else printf("Es una consonante\n");

}
