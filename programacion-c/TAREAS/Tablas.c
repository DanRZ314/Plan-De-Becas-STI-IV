#include<stdio.h>

int main(){
//variables
int i1;
int i2;

for(i1=1; i1<=10; i1++){
	printf("Tabla del %d:\n", i1);
	for(i2=1; i2<=10; i2++){
	printf("%d X %d = %d\n", i1, i2, i1*i2);
	}
	printf("\n\n");
}
}
