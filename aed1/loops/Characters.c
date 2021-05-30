#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char palavra[60];
int vogais=0, consoante=0, i;

puts("Digite uma palavra");
scanf("%s",palavra);


for(i=0; i<strlen(palavra); i++){
  switch(palavra[i]){
    case 'a': 
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    vogais++;
    break;
    default:
    consoante++;
  }
}
printf("Possui: %i Vogais e %i Consoantes",vogais,consoante);
return 0;
}
