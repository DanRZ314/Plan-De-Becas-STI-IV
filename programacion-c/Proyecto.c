/*
Plan de becas STI IV
DGTIC
Introduccion a la programacion en C
Instructores:
- Francisco Martinez Garrido
- Cesar Gustavo Sanchez de la Rosa
PROYECTO FINAL - Juego Buscaminas
Autores: Juana Minerva Martinez Velazquez
	 Daniela A. Romero Zarate
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

//variables
int m1[5][5];
char m2[5][5];
int i, j, ren, col, cont=0, puntos=0, mina=0;

srand(time(NULL));


//Se llena el tablero de la buscamina
for (i=0; i<5; i++){
	for(j=0; j<5; j++){
	m1[i][j] = (rand() % 4) +47;
	}
}


//Busca cuantas minas hay
for (i=0; i<5; i++){
	for(j=0; j<5; j++){
		if(m1[i][j]==47){
		mina++;
		}
	}
}

//Instrucciones del juego
printf("\033[01;33m");
printf("Has entrado en el mundo de las buscaminas muajaja\n\n\n");
printf("\033[0m");

//Se llena un tablero con 'x' que se va a mostrar
printf("\033[0;35m");
printf("     1  2  3  4  5 \n");
printf("\033[0m");
for (i=0; i<5; i++){
	printf("\033[0;35m");
	printf(" %2d ", i+1);
	printf("\033[0m");
	for(j=0; j<5; j++){
	m2[i][j] = 'x';
	printf(" %c ", m2[i][j]);
	}
	printf("\n");
}

printf("\033[01;33m");
printf("\n\n\nSi te atreves a continuar solo tienes que...\n");
printf("\033[0m");

//Ciclo para iniciar el juego
while(cont != 25-mina){


//Se lleva una cuenta de las entradas que se muestran
cont++;


/*Se piden el numero de renglon y el numero de columna
  con el "do" realiza la instruccion dentro hasta obtener valores validos*/
do{
	printf("\033[1;32m");
	printf("Ingresa el numero de la fila: ");
	printf("\033[0m");
	scanf("%d", &ren);
	printf("\033[1;32m");
	printf("Ingresa el numero de la columna: ");
	printf("\033[0m");
	scanf("%d", &col);
	if(ren<1 || ren >5 || col <1 || col >5){
		printf("\033[1;31m");
		printf("No has entendido el punto, intentalo de nuevo\n\n");
		printf("\033[0m");
	}
} while(ren<1 || col<1 || ren>5 || col>5);

if(m2[ren-1][col-1]!=m1[ren-1][col-1]){

//Se cambia la entraba en la matriz que se muestra
m2[ren-1][col-1] = m1[ren-1][col-1];

printf("\n\n\n");

//Se muestra la matriz con el cambio de entrada
printf("\033[0;35m");
printf("     1  2  3  4  5 \n");
printf("\033[0m");
for(i=0; i<5; i++){
	printf("\033[0;35m");
	printf(" %2d ", i+1);
	printf("\033[0m");
	for(j=0; j<5; j++){
	if(ren-1==i && col-1==j){
		printf("\033[1;36m");
		printf(" %c ", m2[i][j]);
		printf("\033[0m");
	} else
	printf(" %c ", m2[i][j]);
	}
	printf("\n");
}


//Instruccion que termina el juego cuando sale una mina
if(m1[ren-1][col-1]==47){
	printf("\033[1;31m");
	printf("\n\n\nERES COMIDA PARA GATO XD\n");
	printf("\033[0m");
	printf("\033[0;33m");
	printf("Solo lograste %d puntos, ¡suerte para la proxima!\n\n", puntos);
	printf("\033[0m");
	break;
}


//Se suman los puntos
puntos = (puntos + m1[ren-1][col-1]) - 48;

printf("\nHas ganado %d puntos\n\n\n", puntos);
} else {
	printf("\033[1;31m");
	printf("\nEsa zona ya esta despejada, buen intento\n\n");
	printf("\033[0m");
	cont--;	
      }

}

//Fin de juego
if(cont == 25-mina){
printf("\033[1;35m");
printf("!Felicidades, terminaste el juego!\n\n");
printf("\033[0m");
}

}
