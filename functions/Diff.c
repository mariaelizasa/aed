#include <stdio.h>

  int max(int a, int b){
	 a > b ? a : b;
    return a;
}

  int min(int a, int b){
  	 a < b ? a : b;
    return b;
   
}

    float diff(int a, int b){
    float result = a > b ? a - b : b - a;
    int maior = max(a,b);
    printf("\n %i é o maior", maior);
      
	int menor = min(a,b);
	printf("\n %i é o menor", menor);

    return printf("\nDiferença: %.1f ", result);

  }


    int main() {

    float a, b;
    printf("Digite dois números:");
    scanf("%f%f", &a, &b);

    diff(a, b);
    return 0;
}
  