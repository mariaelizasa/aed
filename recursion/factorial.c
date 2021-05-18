#include <stdio.h>

int fatorial(int a){
  if(a==0){
  return 1;
} else {
  return a*fatorial(a-1);
}
  
}
  
int main() {
    int a, result;
    printf("\nDigite um número:");
    scanf("%i", &a);
  
    result = fatorial(a);
    printf("Fatorial de %i = %i",a,result);
    return 0;
}
  