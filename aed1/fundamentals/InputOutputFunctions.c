#include <stdio.h>

int main() {
    char text[50];
    puts("Escreva: ");

    fgets(text, sizeof(text), stdin); //sizeof: retorna tamanho da variavel
    fputs(text, stdout);

    return 0;
}
  