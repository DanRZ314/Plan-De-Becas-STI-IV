#include<stdio.h>
#include<math.h>

/*Programa que convierte de decimal a binario, octal o hexadecimal. */

int potencia2(int x){
int i, cont;
for(i=0; cont=0; i++){
	if(x < power(2,i){
	cont = i-1;
	} else
	  cont = 0;
}
}


int main(){

//Variables
int numero, opcion, numero1;
int binario[10];

//Pide al usuario el numero que quiere convertir
printf("Ingresa el numero entero que deseas convertir:\n");
scanf("%d", &numero);

//Pide la opcion para convertir
printf("Ingresa la opcion que deseas para convertir\n");
printf("1.\t Binario\n2.\t Octal\n3.\t Hexadecimal\n");
scanf("%d", &opcion);

//Hace la conversion
numero1 = numero;
switch (opcion){
case 1:
	printf(" %d en binario es: ", numero);
	if(numero < 512){
	binario[9]=0;
	printf("%d", binario[9]);
	}
	else {
		binario[9]=1;
		numero = numero - 512;
		printf("%d", binario[9]);
	    }
	if(numero < 256){
	binario[8]=0;
	printf("%d", binario[8]);
	}
	else {
		binario[8]=1;
		numero = numero - 256;
		printf("%d", binario[8]);
	    }
	if(numero < 128){
	binario[7]=0;
	printf("%d", binario[7]);
	}
	else {
		binario[7]=1;
		numero = numero - 128;
		printf("%d", binario[7]);
	    }
	if(numero < 64){
	binario[6]=0;
	printf("%d", binario[6]);
	}
	else {
		binario[6]=1;
		numero = numero - 64;
		printf("%d", binario[6]);
	    }
	if(numero < 32){
	binario[5]=0;
	printf("%d", binario[5]);
	}
	else {
		binario[5]=1;
		numero = numero - 32;
		printf("%d", binario[5]);
	    }
	if(numero < 16){
	binario[4]=0;
	printf("%d", binario[4]);
	}
	else {
		binario[4]=1;
		numero = numero - 16;
		printf("%d", binario[4]);
	    }
	if(numero < 8){
	binario[3]=0;
	printf("%d", binario[3]);
	}
	else {
		binario[3]=1;
		numero = numero - 8;
		printf("%d", binario[3]);
	}
	if(numero < 4){
	binario[2]=0;
	printf("%d", binario[2]);
	}
	else {
		binario[2]=1;
		numero = numero - 4;
		printf("%d", binario[2]);
	    }
	if(numero < 2){
	binario[1]=0;
	printf("%d", binario[1]);
	}
	else {
		binario[1]=1;
		numero = numero - 2;
		printf("%d", binario[1]);
	    }
	if(numero < 1){
	binario[0]=0;
	printf("%d\n", binario[0]);
	}
	else {
		binario[0]=1;
		printf("%d\n", binario[0]);
	    }
	break;
case 2:
	printf("%d en octal es: %o \n", numero, numero);
	break;
case 3:
	printf("%d en hexadecimal es: %x \n", numero, numero);
	break;
default:
	printf("La opcion no es valida\n");
}


}
