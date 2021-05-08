#include <stdio.h>

int main(void){
	char frase[1000];
  

puts("Insira  uma frase de no máximo 1000 caracters: ");
gets(frase);

 int i = strlen(frase);
 for(int j = i; j >= 0; j--){
		printf("%c", frase[j]); 
	}
	
	return 0;
}