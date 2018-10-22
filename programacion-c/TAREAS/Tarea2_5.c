#include<stdio.h>
/* Programa que calcula el area de un triangulo rectangulo,
   un cuadrado y un rectangulo con los parametros que ingresa
   el usuario. */

int main(){

//Variables
float A, B, C, area;

//Pide al usuario los valores
printf("Ingresa el valor de A, puede tener decimales:\n");
scanf(" %f", &A);
//fflush(stdin);
printf("Ingresa el valor de B, puede tener decimales:\n");
scanf(" %f", &B);
//fflush(stdin);
printf("Ingresa el valor de C, puede tener decimales:\n");
scanf(" %f", &C);
//fflush(stdin);

if(A<0 || B<0 || C<0){
	printf("No existen areas negativas");
}else {
	//calcula el area del triangulo rectangulo de base A y altura C
	area = (A * C) / 2;
	printf("El area del triangulo rectangulo con b=%f y h=%f es: %lf\n", A, C, area);

	//Calcula el area del cuadrado con lados de medida  B
	area = B*B;
	printf("El area del cuadrado con L=%f es: %f\n", B, area);

	//Calcula el area del rectangulo con lados A y B
	area = A*B;
	printf("El area del rectangulo con lados %f y %f es: %f\n", A, B, area);
     }

}

