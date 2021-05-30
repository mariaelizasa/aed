#include <stdio.h>
#include <stdlib.h>

int main(const char** args) {
    FILE* arquivo;
    arq = fopen("menu.txt", "m");

    char nome[100], inicial;
    int opcao;

    do {
        printf("\nDigite:");
        printf("\n0 - Sair");
        printf("\n1 - Adicionar nome");
        printf("\n2 - Buscar por inicial");
        scanf("%i", &opcao);

        switch (opcao) {
        case 1:
            printf("\nDigite seu nome:");
            fgets(nome, 50, stdin);
            fprintf(arq, nome);
            break;
        case 2:
            printf("\nInforme uma inicial:");
            scanf("%c", inicial);

         while (fgets(nome, sizeof(nome), arq) != NULL) {
           printf("%s", nome);
            }
            break;
        }
    } while (opcao != 0);

    fclose(arq);
    return 0;
}