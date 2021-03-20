#include<stdio.h>
#include<math.h>
 
int main(void)
{
float lado, perimetro, area, altura;
printf("Informe o lado do triangulo equilatero: ");
scanf("%f", &lado);
 
perimetro = 3 * lado;
area = pow(lado, 2) * (sqrt(3.0)/2.0);
altura = lado * (sqrt(3.0)/4.0);
 
printf("O perimetro do triangulo é: %2.f \n", perimetro);
printf("A area do triangulo é: %2.f \n", area);
printf("O altura do triangulo é: %2.f \n", altura);
}
