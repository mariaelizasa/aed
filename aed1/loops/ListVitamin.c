#include <stdio.h>
#include <string.h>

int main()

{
   int i, cont, total;
   char dias[7] = {'D','S','T','Q','Q','S','S'};
   int vitaminas[5] = {1,2,3,4,5};

   printf("\nTabela de dias e horários\n\n");

   for (int i = 0; i < strlen(dias) - 1; i++){
        printf("Dia %c: ", dias[i]);

    }
   for (int horas = 6; horas < 18 ; horas +=3 ){
        printf("[%ih Vitamina: %i] ", horas, cont % (total + 1));
        cont++;
      
        if (cont == total + 1){
            cont = 1;
        }
    }
    printf("\n\n");

    return 0;
}

