#include <stdio.h>

int main() {

  int y, a=3, b=5;

  for(int x = 0; x <= 10; x++){
    y = (a * x) + b;
     printf("(%i, %i)", x, y); 
  }
    return 0;
}
  