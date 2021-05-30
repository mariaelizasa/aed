#include <stdio.h>
#include  <math.h>


int main() {
  double value;
  puts("Digite um valor: ");

  scanf("%lf", &value);
  double logResult = log10(value);

  printf("%lf", logResult);
  return 0;

}
  