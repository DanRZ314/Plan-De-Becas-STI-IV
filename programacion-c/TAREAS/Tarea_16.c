#include<stdio.h>
#include<ctype.h>
#include<string.h>

/*Programa que te da la bievenida a la tienda de  Don Toño, te muestra una 
  lista con los productos que tiene y el usuario debe introducir el codigo
  del producto que desea comprar y la cantidad, despues se muestra lo que
  debe pagar y se le agradece por comprar */

int main(){

//Variables
char codigo[5], cadena[5]="";
int cantidad=0, i, id;
float pago;

//Da la bienvenida al usuario
printf("Bienvenido a la tienda de Don Toño, solo tenemos:\n");
printf("\tCODIGO\tPRODUCTO\tPRECIO\n");
printf("\tW3m\tChocotorro\t$12.50\n");
printf("\tyum\tCoca-cola\t$15.50\n");
printf("\temacs\tHuevo    \t$20.00\n");
printf("\tiem\tLeche    \t$23.75\n");
printf("\t7\tTacos canasta\t$25.00\n");

//Pide al usuario los productos que va a comprar y las cantidades
printf("Ingresa el codigo del producto que deseas comprar: ");
for(i=0; i<5; i++){
	scanf("%c", &codigo[i]);
	if(codigo[i] == '\n'){
		codigo[i]= '\0';
		break;
	}
}

do{
printf("Ingresa la cantidad que deseas comprar: ");
scanf("%d", &cantidad);
if(cantidad <0)
printf("Por favor ingrese un entero \"positivo\"\n");
} while(cantidad < 0);
 
//Verifica que el codigo sea correcto
if(codigo[0]== 'W'){
	strcpy(cadena,"W3m");
	id = strcmp(codigo,cadena);
	if (id == 0) {
		id = 1;
	}
}
if(codigo[0]=='y'){
	strcpy(cadena,"yum");
	id = strcmp(codigo,cadena);
	if(id == 0){
		id = 2;
	}
}
if(codigo[0]=='e'){
	strcpy(cadena,"emacs");
	id = strcmp(codigo,cadena);
	if (id == 0){
		id = 3;
	}
}
if(codigo[0]=='i'){
	strcpy(cadena,"i3m");
	id = strcmp(codigo,cadena);
	if(id == 0){
		id = 4;
	}
}
if(codigo[0]== '7'){
	id = 5;
}

//Se hace la cuenta y se muestra la cantidad a pagar
switch(id){
case 1: pago = 12.50*cantidad;
	    printf("Son $%f\n", pago);
	    break;		
case 2: pago = 15.50*cantidad;
	    printf("Son $%f\n", pago);
	    break;
case 3: pago = 20*cantidad;
	      printf("Son $%f\n", pago);
	      break;
case 4: pago = 23.75*cantidad;
	    printf("Son $%f\n", pago);
	    break;
case 5: pago = 25*cantidad;
	  printf("Son $%f\n", pago);
	  break;
default: printf("El codigo que ingresaste no es valido\n"); 
	 break;
}

//Agradece la visita
printf("Gracias por visitar la tienda de Don Toño\n");


}


