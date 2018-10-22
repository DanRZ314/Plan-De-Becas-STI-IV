#include<stdio.h>

 /*Programa que simula un juego de piedra, papel o tijeras*/

int main(){

//Variables
int opcion1, opcion2;

//Muestra las opciones para el jugador 1
printf("Jugardo 1, elige una de las siguientes opciones:\n");
printf("1 para piedra\n2 para papel\n3 para tijeras\n");
printf("Ingresa una opcion: ");
scanf("%d", &opcion1);

//Muestra las opciones para el jugador 2
printf("\nJugardo 2, elige una de las siguientes opciones:\n");
printf("1 para piedra\n2 para papel\n3 para tijeras\n");
printf("Ingresa una opcion: ");
scanf("%d", &opcion2);

//Muestra el resultado
switch(opcion1){
case 1: 
	if(opcion2 == 1){
		printf("Es un empate\n");
	}
	if(opcion2 == 2){
		printf("Gana el jugador 2\n");
	}
	if(opcion2 == 3){
		printf("Gana el jugador 1\n");
	}
	if(opcion2!=1 && opcion2!=2 && opcion2!=3){
		printf("La opcion no es valida\n");
	}
	break;
case 2:
	if(opcion2 == 1){
		printf("Gana el jugador 1\n");
	}
	if(opcion2 == 2){
		printf("Es un empate\n");
	}
	if(opcion2 == 3){
		printf("Gana el jugador 2\n");
	}
	if(opcion2!=1 && opcion2!=2 && opcion2!=3){
		printf("La opcion no es valida\n");
	}
	break;
case 3:		
	if(opcion2 == 1){
		printf("Gana el jugador 2\n");
	}
	if(opcion2 == 2){
		printf("Gana el jugador 1\n");
	}
	if(opcion2 == 3){
		printf("Es un empate\n");
	}
	if(opcion2!=1 && opcion2!=2 && opcion2!=3){
		printf("La opcion no es valida\n");
	}
	break;
default:
	printf("La opcion no es valida\n");
	break;
}


}
