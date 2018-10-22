#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

int arreglo[4],i;   //la variable i es mi contador

srand(time(NULL));   // semilla

for(i = 0 ; i <= 4; i++){

	arreglo[i] = (rand()%6) + 1 ;
}

for(i =0 ; i <= 4; i++){

printf("Sus numero aleatorio %d, es : %d\n",i+1,arreglo[i]); 
}



}
