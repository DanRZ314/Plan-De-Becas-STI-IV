#include<stdio.h>

int main(){
/*Programa que pide al usuario un numero menos a 46 y muesta la sucesion
  de Fibonacci hasta dicho termino */

//Variables
int num, n1, n2, n3, i;

//Pide un numero al usuario menor a 46
printf("Ingresa un numero entero menor o igual a 46: ");
scanf("%d", &num);

//Verifica que el numero ingresado cumpla las condicioines
if(num>46 || num<=0){
	printf("El numero que ingresaste es negativo, cero, o mayor a 46\n"); 
	return 0;	
}

//Muestra los terminos de la sucesion
printf("La sucesion de Fibonacci hasta el termino %d es: \n", num);
i = 1;
n1 = 0;
n2 = 1;
n3 = 0;
printf("\t%d\n", n2);
while(i<num){
	n3 = n2 + n1;
	printf("\t%d\n", n3);	
	n1 = n2;
	n2 = n3;
	i++;	
}
	

}
