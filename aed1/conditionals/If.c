#include <stdio.h>
#include <stdlib.h>

int main (){
	
  int a, b; 
	
	printf("Digite um valor: ");
	scanf("%i", &a);

	printf("Digite o  segundo valor: ");
	scanf("%i", &b);

  if( b != 0 ){
    int resultado = a / b;
    printf("O resultado é: %i", resultado);
  }
  else {
    printf("Divisao por 0 nao é permitida");
  }

 
  return 0;

  
}