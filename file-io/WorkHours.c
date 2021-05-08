#include <stdio.h>

void addhoras(char nome[], float value) {
  FILE *arq;
  arq = fopen(nome, "a");
  fprintf(arq, "%.2f", value); 
  fputc('\n', arq);
  fclose(arq);
}

void somarhoras(char nome[]) {
  FILE *arq;
  arq = fopen(nome, "r");
  float total = 0;
  while(!feof(arq)){
  float val = 0;
  fscanf(arq, "%f", &val);
  printf("%.2f\n", val);
  total += val;
    }
  printf("O valor total de horas de %s é %.2f", nome, total);
}

int main() {
  printf("Digite seu nome: \n");
  char nome[20];
  scanf("%s", nome);

  printf("Digite o numero de horas:");
  float val = 0;
  scanf("%f", &val);
  addhoras(nome, val);

  somarhoras(nome);

  return 0;
}
