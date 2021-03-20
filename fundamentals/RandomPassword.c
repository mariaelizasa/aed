#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  int main(void){

    int a, b, c, d;

    srand(time(NULL));
    
    a = rand()%26 + 65;
    b = rand()%26 + 65;
    c = rand()%26 + 65;
    d = rand()%26 + 65;

    printf("senha %c%c%c%c\n",a,b,c,d);
    

  return 0;
  }