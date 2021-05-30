#include <stdio.h>

int odd(int a){
    if (a>1) {
     if (a%2==1) {
    printf("\n%i", a);
    }
    odd(a-1);
    }
    else {
    printf("\n%i", a);
    }

 
}
int main() {
    printf("QUESTAO 1");
    int a;
    printf("\nDigite um número:");
    scanf("%i", &a);
  
    odd(a);
    return 0;
}
  