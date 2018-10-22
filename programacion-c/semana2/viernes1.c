#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

//generar aleatorios

//rand() funcion para generar numeros aleatorios
//srand() semilla

int arreglo[4], i;

srand(time(NULL));

for(i=0; i<=4; i++){
	arreglo[i]=rand();
}

for(i=0; i<=4; i++){
printf("El numero aleatorio %d, es: %d\n", i+1, arreglo[i]);
}

}

