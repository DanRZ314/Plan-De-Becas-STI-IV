#include<stdio.h>

int main(){

int Arreglo[5]; // 6 posiciones en memoria
int i; //contador

printf("Ingresa 6 numeros\n");

for(i=0; i<=5; i++){
printf("Ingrese el valor para el numero %d: ", i+1);
scanf("%d", &Arreglo[i]);

}

for(i=0; i<=5; i++){
printf("Su numero %d ingresado es: %d", i+1, Arreglo[i]);
printf("\n");
}

}
