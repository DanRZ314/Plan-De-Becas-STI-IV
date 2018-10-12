#include<stdio.h>

/*Programa que pide al usuario dos numero tipo 
  flotante y un caracter para una operacion, el
  programa muestra el resultado de realizar dicha
  operacion. */

int main(){
//variables
float num1, num2, result;
char opr;

//Pide al usuario los numeros
printf("Ingresa un numero, puede ser un numero con punto decimal: ");
scanf(" %f", &num1);
printf("Ingresa un numero, puede ser un numero con punto decimal: ");
scanf(" %f", &num2);

//Muestra al usuario un menu de operaciones
printf("Introduzca la operacion que desea realizar las opciones son: \n");
printf("+ Suma \n- Resta \n* Multiplicacion \n/ Division \n");
scanf(" %c", &opr);

//Realiza la operacion y muestra el resultado
switch(opr){
case '+':
	result = num1 + num2;
	printf("La suma es: %f\n", result);
	break;
case '-':
	result = num1 - num2;
	printf("La resta es: %f\n", result);
	break;
case'*':
	result = num1 * num2;
	printf("La multiplicacion es: %f\n", result);
	break;
case'/':
	result = num1 / num2;
	printf("La division es: %f\n", result);
	break;
default:
	printf("La opcion de operacion no es valida\n");
}	

}
