#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define PI 3.14159
int main (){
	

  int angulo;
  float senRad, cosRad, tanRad, valor, radianos;  
	
	printf("Digite o angulo: ");
	scanf("%i", &angulo);

  senRad = sin(angulo * PI / 180);
  cosRad = cos(angulo * PI / 180);
  tanRad = tan(angulo * PI / 180);

  printf("Seno: %f\n", senRad);
  printf("Cosseno: %f\n", cosRad);
  printf("Tangente: %f\n", tanRad);
 
  return 0;

  
}