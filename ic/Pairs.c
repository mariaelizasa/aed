#include <stdio.h>

int main () {
int i, min, max, num;

printf("Digite dois números para definir o intervalo:");
scanf("%i" "%i", &min, &max);

for (i = min; i <= max; i++) {
int num = i%2;
if (num%2 == 0){

printf ("Numero par: %d\n", i);
  }
}