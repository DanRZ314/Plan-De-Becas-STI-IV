#include<stdio.h>

int main(){
//variables
float num;

//Pide un numero y lo guarda
printf("Dame un numero: ");
scanf("%f", &num);

//Revisa en que intervalo se encuentra
if(num<0){
	printf("%f esta fuera del intervalo\n", num);
}
if(num>=0 && num<=20){
	printf("%f esta en el intervalo [0,20]\n", num);
}
if(num>20 && num<=40){
	printf("%f esta en el intervalo (20,40]\n", num);
}
if(num>40 && num<=60){
	printf("%f esta en el intervalo (40,60]\n", num);
}
if(num>60 && num<=80){
	printf("%f esta en el intervalo (60,80]\n", num);
}
if(num>80 && num<=100){
	printf("%f esta en el intervalo (80,100]\n", num);
}
if(num>100){
	printf("%f esta fuera del intervalo\n", num);
}

}
