#include <stdio.h>
#include  <math.h>
#include <locale.h>

int main() {

 setlocale(LC_ALL, "");

  int tempo;
  float taxa, montante, capital;;
  
  puts("Digite a capital: ");
  scanf("%f", &capital);
  
  puts("Digite a taxa: ");
  scanf("%f", &taxa);
  
  puts("Digite o tempo em meses: ");
  scanf("%i", &tempo);
  
  montante = capital * pow((1 + taxa), tempo);

  printf("O montante é R$: %2.f", montante);
  return 0;

}
  