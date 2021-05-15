#include <stdio.h>

 void parImpar(int a){
    if(a%2 == 0){
       printf("%i é par!", a);
    }
    else{ 
       printf("%i é impar!", a);
      }
  }

int main() {

    int val;
    printf("Digite um número:");
    scanf("%i", &val);

    parImpar(val);
    return 0;
}
  