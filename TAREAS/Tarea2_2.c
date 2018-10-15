#include<stdio.h>
#include<ctype.h>

/* Programa que hace conversiones de unidades de tiempo.
   El programa pide al usuario la cantidad y unidad de
   tiempo que quiere convertir y la unidad a la que lo 
   quiere convertir. */

int main(){

//Variables que se van a utilizar
double cantidad, resultado;
char unidad1, unidad2;

//Explica al usuario lo que realiza el programa
printf("\n");
printf("Este programa hace conversiones de unidades de tiempo.\n");
printf("El programa trabaja con las siguientes unidades:\n\tSegundos, minutos, horas, dias y años\n");

//Pide al usuario la unidad de tiempo a convertir
printf("\nIngresa la unidad de tiempo que deseas convertir:\n");
printf("Opciones:\n\t s para segundos\n\t m para minutos\n\t h para horas\n\t d para dias\n\t a para años\n");
scanf(" %c", &unidad1);
printf("\nIngresa la cantidad que deseas convertir:\n");
scanf(" %lf", &cantidad);
printf("\nIngresa la unidad de tiempo en la que deseas el resultado\n");
printf("Opciones:\n\t s para segundos\n\t m para minutos\n\t h para horas\n\t d para dias\n\t a para años\n");
scanf(" %c", &unidad2);

//convierte las mayusculas en minusculas
unidad1 = tolower(unidad1);
unidad2 = tolower(unidad2);

//Hace la conversion
switch(unidad1){
case 'a':
	if(unidad2 == 'a'){
	printf("Las unidades coinciden: %lf año\ns", cantidad);
	}
	if(unidad2 == 'd'){
	resultado = cantidad * 365;
	printf("%lf años son %f dias\n", cantidad, resultado);
	}
	if(unidad2 == 'h'){
	resultado = cantidad * 8760;
	printf("%lf años son %f horas\n", cantidad, resultado);
	}
	if(unidad2 == 'm'){
	resultado = cantidad * 525600;
	printf("%lf años son %l minutos\n", cantidad, resultado);
	}
	if(unidad2 == 's'){
	resultado = cantidad *31536000;
	printf("%lf años son %lf segundos\n",cantidad, resultado);
	}
	break;
case 'd':
	if(unidad2 == 'd'){
	printf("Las unidades coinciden: &lf dias\n", cantidad);
	}
	if(unidad2 == 'a'){
	resultado = cantidad / 365;
	printf("%lf dias son %lf años\n", cantidad, resultado);
	}
	if(unidad2 == 'h'){
	resultado = cantidad * 24;
	printf("%lf dias son %fl horas\n", cantidad, resultado);
	}
	if (unidad2 == 'm'){
	resultado = cantidad *1440;
	printf("%lf dias son %lf minutos\n", cantidad, resultado);
	}
	if(unidad2 == 's'){
	resultado = cantidad * 86400;
	printf("%lf dias son %lf segundos\n", cantidad, resultado);
	}
	break;
case 'h':
	if(unidad2 == 'h'){
	printf("Las unidades coinciden: %lf horas\n", cantidad);
	}
	if(unidad2 == 'a'){
	resultado = cantidad / 24 / 365;
	printf("%lf horas son %lf años\n",cantidad, resultado);
	}
	if(unidad2 == 'd'){
	resultado = cantidad / 24;
	printf("%lf horas son %lf dias\n", cantidad, resultado);
	}
	if(unidad2 == 'm'){
	resultado = cantidad * 60;
	printf("%lf horas son %lf minutos\n", cantidad, resultado);
	}
	if(unidad2 == 's'){
	resultado = cantidad * 3600;
	printf("%lf horas son %lf segundos", cantidad, resultado);
	}
	break;
case 'm':
	if(unidad2 == 'm'){
	printf("Las unidades coinciden: %lf minutos\n", cantidad);
	}
	if(unidad2 == 'a'){
	resultado = cantidad / 60 / 24 / 365;
	printf("%lf minutos son %lf años\n", cantidad, resultado);
	}
	if(unidad2 == 'd'){
	resultado = cantidad / 60 / 24;
	printf("%lf minutos son %lf dias\n", cantidad, resultado);
	}
	if(unidad2 == 'h'){
	resultado = cantidad / 60;
	printf("%lf minutos son %lf horas\n", cantidad, resultado);
	}
	if(unidad2 == 's'){
	resultado = cantidad * 60;
	printf("%lf minutos son %lf segundos\n", cantidad, resultado);
	}
	break;
case 's':
	if(unidad2 == 's'){
	printf("Las unidades coinciden: %lf segundos\n", cantidad);
	}
	if(unidad2 == 'a'){
	resultado = cantidad / 60 / 60 / 24 / 365;
	printf("%lf segundos son %lf año\n", cantidad, resultado);
	}
	if(unidad2 == 'd'){
	resultado = cantidad / 60 / 60 / 24;
	printf("%lf segundos son %lf dias\n", cantidad, resultado);
	}
	if(unidad2 == 'h'){
	resultado = cantidad / 60 / 60;
	printf("%lf segundos son %lf horas\n", cantidad, resultado);
	}
	if(unidad2 == 'm'){
	resultado = cantidad / 60;
	printf("%lf segundos son %lf minutos\n", cantidad, resultado);
	}
	break;
default:
	printf("Error: La opcion no es valida\n");
}


}
