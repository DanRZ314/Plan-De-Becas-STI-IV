#include<stdio.h>
/* Programa que muestra una lista de numeros del uno al
   numero que indica el usuario.
   Pide 3 numero y lista usando una estructura distinta
   para los ciclos. */

int main(){
//Variables
int numero, i;

//Pide el numero
printf("Ingresa un numero entero:\t");
scanf("%d", &numero);

//lista los numeros con do while
i=1;
printf("Esta lista es con do-while\n");
do{
	printf("%d\n", i);
	i ++;
} while (i<=numero);


//lista los numero con while
//Pide el numero
printf("Ingresa un numero entero:\t");
scanf("%d", &numero);
i=1;
printf("Esta lista es con while\n");
while(i<=numero){	
	printf("%d\n", i);
	i++;
}

//lista los numeros con for
//Pide el numero
printf("Ingresa un numero entero:\t");
scanf("%d", &numero);
printf("Esta lista es con for\n");
for(i=1; i<=numero; i++){
	printf("%d\n", i);
}

}
