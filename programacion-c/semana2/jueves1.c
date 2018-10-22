#include<stdio.h>

int suma(int x, int y){
	return (x+y);
}
int resta(int x, int y){
	return (x-y);
}
int multiplicacion(int x, int y){
	return (x*y);
}
int division(int x, int y){
	return (x/y);
}

int main(){
int c, a, b;
printf("Ingresa un numero: ");
scanf("%d", &a);
printf("Ingresa un numero: ");
scanf("%d", &b);

c=suma(a,b);
printf("La suma es: %d\n", c);
c=resta(a,b);
printf("La resta es: %d\n", c);
c=multiplicacion(a,b);
printf("La multiplicacion es: %d\n", c);
c=division(a,b);
printf("La division es: %d\n", c);

}
