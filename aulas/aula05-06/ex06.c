/*Dada uma letra, escreva na tela se essa letra é uma vogal ou consoante
(considerar apenas letras minúsculas).*/

#include <stdio.h>

int main() {
  char letra;

  //recebendo letra
  printf("\nDigite uma letra: ");
  scanf(" %c", &letra);

  //verificando se é vogal
  switch (letra) {
    case 'a': case 'e': case 'i': case 'o': case 'u':
    printf("\nA letra digitada é uma vogal\n");

    default:
    printf("\nA letra digitada é uma consoante\n");
  }
}