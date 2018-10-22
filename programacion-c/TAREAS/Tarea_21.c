#include<stdio.h>

/*Programa que calcula el promedio de las edades que le pase el usuario*/

int main(){
//Variables
float i=0; 
float suma=0;
float edad=1;

//Pide las edades

while(edad > 0) {
printf("Ingresa una edad: ");
scanf("%f", &edad);
if(edad >0){
	suma = suma + edad;
	i++;
    }
}

//Muestra el promedio
printf("El promedio de las edades es: %f\n", suma/i);


}
