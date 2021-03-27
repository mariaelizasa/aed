#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define TAXA 0.08;
#define MULTA 0.4;
int main (){
	

  int meses, salario;
  float juros = 0.0025;  
	
	printf("Informe o periodo em meses: ");
	scanf("%i", &meses);

	printf("Informe o valor do salário base: ");
	scanf("%i", &salario);
  
  float depositoMensal = salario * TAXA; 
	printf("DepósitoMensal R$: %2.f\n", depositoMensal);
	
  float saldoCorrigido = depositoMensal * (1 + juros) * (pow((1 + juros), meses) -1)/juros;
	printf("saldoCorrigido R$: %2.f\n", saldoCorrigido);
  
  float multa = saldoCorrigido * MULTA;
  printf("Multa por demissao R$: %2.f\n", multa);
  
  float total = saldoCorrigido + multa;
  printf("TOTAL FGTS mais 40 por cento de multa: %2.f\n", total);

 
  return 0;

  
}