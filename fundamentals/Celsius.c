#include <stdio.h>
 
int main (){
  
  float celsius, fahr;
  
  printf("Digite uma temperatura em Celsius: ");
  scanf("%f", &celsius);
  
  fahr = celsius*(9.0/5.0)+32;
  
  printf("%2.f em Celsius e o mesmo que %2.f em Fahr:", celsius, fahr);
}
