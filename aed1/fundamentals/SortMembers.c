#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main (){
  
  int random, integrantes;
  
  printf("Informe o numero de integrantes: ");
  scanf("%i", &integrantes);
 
 random = rand() % integrantes + 1;
 
 printf("O numero sorteado foi: %i\n", random);
 return 0;
 
 }
