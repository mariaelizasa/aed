#include <stdio.h>

void inverte(char *frase){
     if (*frase != '\0') {
        inverte(frase++);
    } 
    printf("%c", *frase);
  }

 

int main() {
     char frase[100];
     puts("Digite uma frase:");
     fgets(frase, 100, stdin);
  
     inverte(frase);
    return 0;
}
  