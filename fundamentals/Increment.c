#include <stdio.h>

int main (){
    
char letra;
  
printf("Escreva uma letra:");
scanf("%c", &letra);
  
printf(" Letra %c\n Código ASCII: %i", letra, letra);

char letraSeguinte = letra + 1;

printf("\n Letra Seguinte %c\n Código ASCII: %i", letraSeguinte, letraSeguinte);
printf(" Letra Seguinte %c\n Código ASCII: %i", letra++, letra++);
return 0;
}
