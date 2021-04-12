#include <stdio.h>
#include <math.h>

int main(void)
{
	float a, b, c, delta, xv, yv;
	double x,  y;
	printf("Informe  o  valor de a: ");
	scanf("%f", &a);
	printf("Informe  o  valor de b: ");
	scanf("%f", &b);
	printf("Informe  o  valor de c: ");
	scanf("%f", &c);
	
	delta = pow(b, 2)-(4*a*c);
    x = ((-1*b) + sqrt(delta))/(2.0 * a);
	y = ((-1*b) - sqrt(delta))/(2.0 * a);

	xv = (-1*b)/(2*a);
	yv = (-1*delta)/(4*a);
	
  printf("Raízes da equação: (%.2lf, %.2lf)\n", x, y);
  printf("Vertices da equação: (%.2f, %.2f)", xv, yv);

	return 0;
}
