#include <stdio.h>
#include <math.h>

void formaParabola(float a){
    if (a > 0){
        printf("Parabola voltada para cima.");
    }
    else if (a < 0){
        printf("Parabola voltada para baixo.");
    }
    else{
        printf("Equacao de 1 grau");
    }
}

float deltaExpressao(float a, float b, float c){
    return (pow(b, 2) - (4 * a * c));
}

void raizesExpressao(float a, float b, float delta){
    float x1 = ((-1 * b) + sqrt(delta)) / (2 * a);
    float x2 = ((-1 * b) - sqrt(delta)) / (2 * a);
    printf("Zeros da função: %.2f %.2f", x1, x2);
}

void numeroRaizes(float delta){
    if (delta > 0){
        printf("Duas raízes. A parabola toca a reta x em dois pontos.");
    }
    else if (delta < 0){
        printf("A parabola nao toca a reta x.");
    }
    else{
        printf("Uma única raiz.");
    }
}
void verticeParabola(float a, float b, float delta){
    float xv = (-1 * b) / (2 * a);
    float yv = (-1 * delta) / (4 * a);
    printf("Vértices: %.2f %.2f", xv, yv);
}

int main(){
    float a, b, c, *raizes, *coordenadasVertice;
    printf("Digite o valor de a, b e c da expressao ( a*(x^2) + b * x + c )\n");
    scanf("%f%f%f", &a, &b, &c);

    formaParabola(a);

    float delta = deltaExpressao(a, b, c);
    printf("\n Delta: %.2f", delta);

    numeroRaizes(delta);

    if (delta >= 0){
    raizesExpressao(a, b, delta);
    }
    verticeParabola(a, b, delta);

    return 0;
}