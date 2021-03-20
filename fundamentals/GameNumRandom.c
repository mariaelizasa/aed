#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    
  srand(time(NULL));
  int num = rand()%10+1;

  printf("pense em um numero de 0 a 30(nao se esqueça dele)\n");getchar();
  printf("multiplique esse valor por 2\n");getchar();
  printf("adicione mais %i unidades\n",num*2);getchar();
  printf("divida o resultado por 2\n");getchar();
  printf("o valor e:%i\n",num);

  return 0;

  }