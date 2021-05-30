
#include <stdio.h>
#include <string.h>

int main(){
  int valor;
  char maiusculo [26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char minusculo [26]="abcdefghijklmnopqrstuvwxyz";

  FILE *arq;
  arq = fopen("alfabeto.txt","w");

  for(int i=0; i< 26;i ++){
    fprintf(arq, "%c,", maiusculo[i]);
  }
  fprintf(arq, "\n");

  for(int i = strlen(minusculo) - 1; (i >0 || i< 0); i--){
    fprintf(arq, "%c,", minusculo[i]);
  }
  return 0;
}