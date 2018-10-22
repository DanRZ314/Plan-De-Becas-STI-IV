#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*Programa que simula arrojar un dado 5 veces*/

int main(){
//Variables
int arreglo[4],i;  

//Semilla para que no de los mismo numeros cada que se ejecuta el programa
srand(time(NULL));  

//simula los tiros
for(i = 0 ; i <= 4; i++){
	arreglo[i] = (rand()%6) + 1 ;
}

//Muestra el resultado de lanzar el dado
for(i =0 ; i <= 4; i++){
	printf("El lanzamiento %d, es: %d\n",i+1,arreglo[i]); 
}



}
