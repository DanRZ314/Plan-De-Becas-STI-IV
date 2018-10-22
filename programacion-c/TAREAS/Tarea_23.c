#include<stdio.h>
#include<math.h>

/*Programa que pide 4 numeros distintos y verifica si se pueden formar
  triangulos cuyos lados midan 3 de esos numeross */

//Funcion que verifica las condiciones para un segmento
int resta, suma, i;
int condiciones(int a1, int a2, int a3){
resta = a2-a3;
suma = a2+a3;
if(a1>fabs(resta)){
	if(a1<suma){
	i=1;
	}
}
return i;
}

//Funcion principal
int main(){
//Variables
int a, b, c, d;
int aux;

i=0;

//Se piden los valores:
printf("Ingresa el valor del segmento a: ");
scanf("%d", &a);
printf("Ingresa el valor del segmento b: ");
scanf("%d", &b);
printf("Ingresa el valor del segmento c: ");
scanf("%d", &c);
printf("Ingresa el valor del segmento d: ");
scanf("%d", &d);

//Verificamos con los segmentos a,b,c
aux = condiciones(a,b,c);
if(aux == 1){
	aux = condiciones(b,a,c);
	if(aux == 1){
		aux = condiciones(c,b,a);
		if(aux == 1){
			printf("Los segmentos a, b y c pueden formar un triangulo\n");
		}
	}
} else
  printf("No se puede formar un triangulo con los segmentos a, b y c\n");


//Verificamos con los segmentos a,b,d
aux = condiciones(a,b,d);
if(aux == 1){
	aux = condiciones(b,a,d);
	if(aux == 1){
		aux = condiciones(d,b,a);
		if(aux == 1){
			printf("Los segmentos a, b y d pueden formar un triangulo\n");
		}
	}
} else
  printf("No se puede formar un triangulo con los segmentos a, b y d\n");


//Verificamos con los segmentos a,c,d
aux = condiciones(a,c,d);
if(aux == 1){
	aux = condiciones(c,a,d);
	if(aux == 1){
		aux = condiciones(d,c,a);
		if(aux == 1){
			printf("Los segmentos a, c y d pueden formar un triangulo\n");
		}
	}
} else
  printf("No se puede formar un triangulo con los segmentos a, c y d\n");

//Verificamos con los segmentos b,c,d
aux = condiciones(b,c,d);
if(aux == 1){
	aux = condiciones(c,b,d);
	if(aux == 1){
		aux = condiciones(d,c,b);
		if(aux == 1){
			printf("Los segmentos b, c y d pueden formar un triangulo\n");
		}
	}
} else
  printf("No se puede formar un triangulo con los segmentos b, c y d\n");

}
