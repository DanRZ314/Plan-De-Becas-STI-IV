#include <stdio.h>
#include <ctype.h>
/*
  12/10/18
  Vocales, Consonantes
  En una instruccion switch
*/

int main(){                //inicio del programa
  
//declaracion de variables
  
  char letra;//variable para guardar la entrada
  
  printf("\n****************************");
  printf("\nIntroduce una latra\npara saber si es una\nvocal :  ");     //pedir la letra
  scanf(" %c",&letra);   //guardar en variable 

  letra = tolower(letra);   //convertimos cualquier letra a minuscula
  
  switch(letra){            //inicion del cuerpo del switch
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                         printf("\n\t**********************\n");  
                         printf("\n\tSu letra \"%c\" es una vocal\n\n",letra);
                         printf("\t***********************\n");
                         break;
                
                default: 
                         printf("\n\t*********************\n");  
                         printf("\n\tSu letra \"%c\" es una Consonante\n\n",letra);
                         printf("\t***********************\n\n\n");
            
            }            //fin del cuerpo del switch
            

}

/*  En una instruccion de seleccion "switch", cada "case" debe de tener como ultima 
    instruccion a "break", para salir inmediatamente del switch.
    Si no se coloca el break, se seguira ejecutando el codigo hasta encontrar un break,
    o hasta terminar todas las opciones (case) del switch.
*/
