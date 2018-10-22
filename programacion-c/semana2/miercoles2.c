#include<stdio.h>

int main(){

char Palabra[15];
int i;

printf("Ingrese una palabra de maximo 15 letras: ");

for(i=0; i<15; i++){
	scanf("%c", &Palabra[i]);
	if(Palabra[i]== '\n'){
	break;
	}
}

printf("\nSu palabra fue: ");

for(i=0; i<15; i++){
	printf("%c", Palabra[i]);
	if(Palabra[i] == '\n'){
	break;
	}
}

}
