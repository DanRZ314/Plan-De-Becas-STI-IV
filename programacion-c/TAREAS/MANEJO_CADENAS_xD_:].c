#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[20];
    
    
    
    sprintf(cadena,"PRUEBA");
    printf("%s\n",cadena);
    
    sprintf(cadena,"ABCD");
    printf("%s\n",cadena);
    
    sprintf(cadena,"EWR");
    printf("%s\n",cadena);
    
    
    /*podrias tener una cadena que uses solo para limpiar las demas*/
    char cadenalimpia[50] ="";//cadena vacia
    
    
    strcpy(cadena,cadenalimpia);
    /*como esta vacia, deja vacia la cadena a la que se copie*/
    strcpy(cadena,"HOLA KE ASE");
    printf("%d\n",strlen(cadena)); //compruebas que solo guarda 11 caracteres de HOLA KE ASE
    /*como ya esta vacia ahora solo copiara lo que esta en el texto*/
    printf("%s\n",cadena);
    
    
    strcpy(cadena,cadenalimpia);
    /*como esta vacia, deja vacia la cadena a la que se copie*/
    strcpy(cadena,"SI FUNCIONA :)");
    printf("%d\n",strlen(cadena)); //compruebas que solo guarda 14 caracteres de SI FUNCIONA :)
    /*como ya esta vacia ahora solo copiara lo que esta en el texto*/
    printf("%s\n",cadena);
    
    
    
    
    
}
