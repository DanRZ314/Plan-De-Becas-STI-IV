#include<stdio.h>

/*Programa que indica al usuario si su signo del zodiaco es un signo 
  de fuego, tierra, aire o agua*/

int main(){

//variable
int opcion;

//Muestra al usuario una lista con los signos del zodiaco
printf("La siguiente lista muestra los signos del zodiaco,\n");
printf("cada signo pertenece a una de las siguientes categorias:\n");
printf("\tfuego, tierra, aire, agua\n");
printf("\n1.\tAries\n2.\tTauro\n3.\tGenimis\n4.\tCancer\n5.\tLeo\n6.\tVirgo\n7.\tLibra\n8.\tEscorpio\n9.\tSagitario\n10.\tCapricornio\n11.\tAcuario\n12.\tPiscis");

//Pide al usuario ingresar la opcion de su signo
printf("\nSi desea conocer la categoria de su signo, ingrese\n");
printf("el numero de la lista en que se encuentra dicho signo:\n");
scanf(" %d", &opcion);

//Muestra la categoria del signo elegido
switch(opcion){
case 1:
	printf("Aries es un signo de fuego\n");
	break;
case 2:
	printf("Tauro es un signo de tierra\n");
	break;
case 3:
	printf("Genimis es un signo de aire\n");
	break;
case 4:
	printf("Cancer es un signo de agua\n");
	break;
case 5:
	printf("Leo es un signo de fuego\n");
	break;
case 6:
	printf("Virgo es un signo de tierra\n");
	break;
case 7: 
	printf("Libra es un signo de aire\n");
	break;
case 8:
	printf("Escorpio es un signo de agua\n");
	break;
case 9:
	printf("Sagitario es un signo de fuego\n");
	break;
case 10:
	printf("Capricornio es un signo de tierra\n");
	break;
case 11:
	printf("Acuario es un signo de aire\n");
	break;
case 12:
	printf("Piscis es un signo de agua\n");
	break;
default: 
	printf("La opcion que ingresaste no es valida\n");
}	



} 
