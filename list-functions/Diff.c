#include <stdio.h>

    float diff(int a, int b){
    float result = a > b ? a - b : b - a;
    return printf("Diferença: %.1f ", result);
  }

    int main() {

    float a, b;
    printf("Digite dois números:");
    scanf("%f%f", &a, &b);

    diff(a, b);
    return 0;
}
  