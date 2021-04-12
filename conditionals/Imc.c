#include <stdio.h>
#include <math.h>

int main(void)
{
	float altura, peso, imc;
	
	printf("Infome o peso (Kg):");
	scanf("%f", &peso);

	printf("Infome a altura (m):");
	scanf("%f", &altura);

	imc = peso/pow(altura, 2);
	printf("Seu IMC é %.2f\n", imc);	

	if (imc < 10){
		printf("Desnutrição Grau V");
	}else if (imc >= 10 && imc < 13){
		printf("Desnutrição Grau IV");
	}else if (imc >= 13 && imc < 16){
		printf("Desnutrição Grau III");
	}else if (imc >= 16 && imc < 17){
		printf("Desnutrição Grau II");
	}else if (imc >= 17 && imc < 18.5){
		printf("Desnutrição Grau I");
	}else if (imc >= 18.5 && imc < 25){
		printf("Normal");
	}else if (imc >= 25 && imc < 30){
		printf("Pré-obesidade");
	}else if (imc >= 30 && imc < 35){
		printf("Obesidade Grau I");
	}else if (imc >= 35 && imc < 40){
		printf("Obesidade Grau II(Severa)");
	}else if (imc >= 40){
		printf("Obesidade Grau III(Mórbida)");
	}
	return 0;
}