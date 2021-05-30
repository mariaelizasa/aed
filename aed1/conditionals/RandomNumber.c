#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

	srand(time(NULL));
	int number1 = rand()% 10 + 1, number2;

	printf("Adivinhe o numero de 1 a 10:");
	scanf("%i", &number2);

	if(number1 == number2){
		printf("Parabéns você acertou!");
	} 
	else if(number2 < number1){
		printf("Você errou, chute baixo!");
	}
	else{
		printf("Você errou, chute alto!");
	}
	printf("O número era: %i\n", number1);
    	return 0;
}