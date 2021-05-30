#include <stdio.h>

void escrever(float value) {
  FILE *arq;
  arq = fopen("dados.txt", "a"); //w=write, r=read, a=append
  fprintf(arq, "%.2f", value); //fputc, fputs, fprintf
  fputc('\n', arq);
  fclose(arq);
}

void inputValue() {
  printf("Digite um valor:");
  float val = 0;
  scanf("%f", &val);
  escrever(val);
}

void soma() {
  FILE *arq;
  arq = fopen("dados.txt", "r");
  //fgetc, fgets, fscanf
  float total = 0;
  while(!feof(arq)){
  float val = 0;
  fscanf(arq, "%f", &val);
  printf("%.2f\n", val);
  total += val;
    }

    printf("Total: %.2f", total);
}

int main() {
  inputValue();
  soma();

  return 0;
}

