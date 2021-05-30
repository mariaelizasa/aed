#include <stdio.h>

void hanoi(int num, int origem, int dest, int trab){
  if(num==1){ 
	printf("\nMove origem %i para %i", origem , dest);
	return;
	}
  
  hanoi(num-1, origem, trab, dest);
    printf("\nMove origem %i para %i", origem, dest);
    hanoi(num-1, trab, dest, origem);
}

int main(){
  printf("QUESTAO 4");
  int num;
  printf("\nDigite o numero de discos: ");
  scanf("%i", &num);
  printf("Parametros :\n");
  hanoi(3, 1, 3, 2);
  
	
	return 0;
}