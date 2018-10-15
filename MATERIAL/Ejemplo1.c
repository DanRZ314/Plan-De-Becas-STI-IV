#include <stdio.h>
/*
  12/10/18
  Vocales, Consonantes
  Con solo if
*/

int main(){                //inicio del programa
  
  //declaracion de variables
  
  int tipo = 0;  //0 es consonante , 1 es vocal
  char letra;       //variable para guardar la entrada
  
  printf("\n****************************");
  printf("\nIntroduce una latra\npara saber si es una\nvocal :  ");     //pedir la letra
  scanf(" %c",&letra);   //guardar en variable 


  if(letra == 'a')
                   tipo = 1;                                         
                   

  if(letra == 'e')
                   tipo = 1; 
                   

  if(letra == 'i')
                   tipo = 1; 
                   

  if(letra == 'o')
                   tipo = 1; 
                   

  if(letra == 'u')
                   tipo = 1; 
                   

  if(letra == 'A')
                   tipo = 1; 
                   

  if(letra == 'E')
                   tipo = 1; 
                   
  if(letra == 'I')
                   tipo = 1; 

  if(letra == 'O')
                   tipo = 1; 

  if(letra == 'U')
                   tipo = 1; 
  
           
  if(tipo){  //si es true (verdadero) muestra vocal
          printf("\n\t**********************\n");  
          printf("\tSu letra \"%c\" es una vocal\n",letra);
          printf("\t***********************\n");
          }
                   
  if(!tipo){ //si es false (falso) muestra consonante
            printf("\n\t**********************\n");  
            printf("\n\tSu letra \"%c\" es una Consonante\n",letra);
            printf("\t***********************\n");
            }
            
  /* podriamos entrar al ultimo if, tambien de la siguiente forma

  if(tipo == 0)     

*/
  
  
  
  
}
