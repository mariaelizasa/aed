#include <stdio.h>

void contaPares(int inicio, int fim){
     printf("%i", inicio);
  if(inicio != fim){
 contaPares(inicio + 2, fim);
    }
}

int main() {
    contaPares(2, 10);
    return 0;
}
  