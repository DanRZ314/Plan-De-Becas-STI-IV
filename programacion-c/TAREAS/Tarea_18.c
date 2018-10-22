#include<stdio.h>

int main(){
//Variables
int num1, num2, mod, cont, i, suma;

//Pide al usuario los numeros
printf("Dame el primer numero, debe ser un entero: ");
scanf("%d", &num1);
printf("Dame el segundo numero, debe ser un entero: ");
scanf("%d", &num2);

//Verifica el numero mas grande
if(num1<num2){
	for(i=num1; i<=num2; i++){	//Muestra los numeros
		printf("\t%d\n", i);
	}
	printf("\n\n");
	cont = num2-num1;
	if(cont%2 == 1){
		suma = (num2+num1)*(cont/2+1);
	} else {
		suma = (num2+num1)*(cont/2)+(num1+cont/2);
	       }

} else {
	for(i=num2; i<=num1; i++){
	printf("\t%d\n", i);
	}
	cont = num1-num2;
	if(cont%2 == 1){
		suma = (num1+num2)*(cont/2+1);
	} else {
		suma = (num1+num2)*(cont/2)+(num2+cont/2);
	       }
	
       }
printf("La suma es: %d\n", suma);

}
