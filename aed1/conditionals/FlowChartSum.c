#include <stdio.h>

int main(void) {
  
	int number1, number2, result, soma;	
  
	printf("Infome o primeiro numero:");
	scanf("%i",&number1);

	printf("Infome o segundo numero:");
	scanf("%i",&number2);
	
    soma = number1 + number2; 
	
	if(soma > 5 && soma <= 10){
	  result = soma + 5;
      printf("%i", result);
      
	} else {
	  result = soma - 3;
      printf("%i", result);
	}
    	return 0;
}