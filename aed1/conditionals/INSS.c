#include <stdio.h>
#include <math.h>

int main(void)
{
	float salario, aliquota = 0;
	
	printf("Digite seu salário: ");
	scanf("%f", &salario);

		if(salario >= 0 && salario <= 1100){
		    aliquota = aliquota + salario * 0.075;

		} else if(salario >= 1100.01 && salario <= 2203.45){
		
			aliquota = aliquota + 82.50;
			aliquota = aliquota + (salario - 1100) * 0.09; 

		}  else if(salario >= 2203.49 && salario <= 3300.22){
			aliquota = aliquota + 82.50 + 99.31;
			aliquota = aliquota + (salario - 2203.48) * 0.12;

		} else if(salario >= 3305.23 && salario <= 6433.57){

			aliquota = aliquota + 82.50 + 99.31 + 132.21;
			aliquota = aliquota + (salario - 3305.23) * 0.14;
		} else {
			aliquota =  aliquota + 82.50 + 99.31 + 132.21 + 437.97;
		}	
	printf("O valor da sua aliquota é: %.2f", aliquota);

	return 0;
}