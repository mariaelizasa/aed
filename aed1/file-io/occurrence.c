#include <stdio.h>
#include <string.h>

int main() {
    
    char nome[100], caracter, leitura;
    printf("\nInforme o arquivo:");
        int i=0;
    fgets(nome, 100, stdin);

    int tamanho = strlen(nome);

    if (nome[tamanho - 1] == '\n'){
        nome[tamanho -1] = 0;
    }
    
    FILE* arquivo = fopen(nome, "nome");

    printf("\nInforme o caractere para contabilizar:");
    scanf("%c", &caracter);

    while ((leitura = fgetc(arquivo)) != EOF) {
        printf("%c", leitura);

        if (leitura == caracter){
            i++;
        }
    }
    printf("Foram encontrados %i caracters %c", i, caracter);

    return 0;
}