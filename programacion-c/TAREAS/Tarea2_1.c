#include <stdio.h>
#include <math.h>

/*Programa que resuelve una ecuación de segundo grao
  usando la formula general*/

int main(){
//Variables que se piden al usuario
double a, b, c; 
//Variables para el programa
double p, r, disc, x1, x2;

//Pide al usuario los valores de los coeficientes
printf("Ingresa el coeficiente del termino cuadratico: ");
scanf(" %lf", &a);
printf("Ingresa el coeficiente del termino lineal: ");
scanf(" %lf", &b);
printf("Ingresa el coeficiente del termino independiente: ");
scanf(" %lf", &c);

/* Primero verifica que la ecuacion sea de segundo grado,
   despues verifica que el discriminante no sea negativo
   y por ultimo resuelve utilizando la formula general */

if (a == 0){
	printf("\nLa ecuacion no es de segundo grado\n");
} else {
	p = pow(b,2);
	disc = p-4*a*c;
	if (disc < 0){
		printf("\nLa ecuacion tiene raices complejas\n");
	} else {
		r = sqrt(disc);
		x1 = (-b + r)/(2*a);
		x2 = (-b - r)/(2*a);
		printf("\nX1 = %lf \tX2 = %lf\n", x1, x2);
		}
	}
}
