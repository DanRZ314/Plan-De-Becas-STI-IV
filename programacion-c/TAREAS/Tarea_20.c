#include<stdio.h>

/*Programa que recibe un numero entero mayor a cero y menor a 13
  y muestra el factorial de ese numero */

int main(){
//Variables
int num, i, factorial;

//Pide al usuario un numero entero positivo menor a 13
printf("Ingresa un numero entero positivo menor a 13: ");
scanf("%d", &num);

//Verifica que el numero cumpla las condiciones
if(num>=13 || num<=0){
	printf("El numero que ingresaste no es valido\n");
	return 0;
}

//Calcula y muestra el factorial del numero ingresado
factorial = 1;
for(i=1; i<=num; i++){
	factorial = factorial*i;
}
printf("El factorial de %d es:\n", num);
printf("%d\n", factorial);

}
