#include <stdio.h>

int main(void){
	int menu;
	float total = 0;
	do{
		printf("Peca pelo número");
		printf("0 - Sair");
		printf("1 - Pounder");
		printf("2 - Quarter");
		printf("3 - Crispy");
		printf("4 - Chiken");
		printf("5 - Nogget");
		scanf("%i", &menu);
	
		switch (menu){
			case 0:
				break;
			case 1:
				printf("Voce escolheu Pounder: $5.49");
				total =  total + 5.49;
				break;
			case 2:
				printf("Voce escolheu  Quarter: $6,49");
				total =  total + 6.49;
				break;
			case 3:
				printf("Voce escolheu Crispy:  $5,89");
				total = total  + 5.89;
				break;
			case 4:
				printf("Voce escolheu Chiken:  $6,19");
				total = total + 6.19;
				break;
			case 5:
				printf("Voce escolheu Nogget:  $6,19");
				total = total + 6.19;
				break;
			default:
				printf("Selecione um valor conforma a lista");
		}
		printf("\n\nTotal: %.2f", total);
	}while(menu != 0);

	return 0;
}