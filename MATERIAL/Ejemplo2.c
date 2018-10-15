#include <stdio.h>
#include <ctype.h>
/*
  12/10/18
  Vocales, Consonantes
  En una sola intruccion if else
*/

int main(){                //inicio del programa
  
  //declaracion de variables
  
  char letra;       //variable para guardar la entrada
  
  printf("\n****************************");
  printf("\nIntroduce una latra\npara saber si es una\nvocal :  ");     //pedir la letra
  scanf(" %c",&letra);   //guardar en variable 

  letra = tolower(letra);   //convertimos cualquier letra a minuscula
  
  //podriamor usar toupper(); para convertirlas a mayusculas
  
  
  
  /*
  Los operadores logicos 
  nos permite agrupar varias condiciones.
  
  El operador logico  OR "||"
  nos permite agrupar las opciones
  en una sola condicion, ya que si 
  alguna de ellas es verdadera 
  se ejecutara la instruccion
   
  */
  
  
  if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
          printf("\n\t**********************\n");  
          printf("\n\tSu letra \"%c\" es una vocal\n\n",letra);
          printf("\t***********************\n");
          }
                   
  else{    //cuando la condicion es falsa
            printf("\n\t**********************\n");  
            printf("\n\tSu letra \"%c\" es una Consonante\n\n",letra);
            printf("\t***********************\n\n\n");
            }
            
 
}
