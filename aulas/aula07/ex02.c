/*Crie uma função que recebe um caractere e retorna o inteiro 1 se o
caractere for uma letra minúscula (a-z), 2 se for maiúscula (A-Z) ou 0 se
for outro caractere (!, @, #, $, %, 1, 2, 3, etc).*/

#include <stdio.h>

int caracterVerify(char);

int main() {
  char c;

  //recebendo caracter
  printf("Digite um caracter: ");
  scanf(" %c", &c);

  //verificando caracter e imprimindo resultado
  switch (caracterVerify(c))
  {   
    case 1:
    printf("\nÉ uma letra minúscula\n");
    break;
    
    case 2:
    printf("\nÉ uma letra maiúscula\n");
    break;

    default:
    printf("\nNão é uma letra\n");
    break;
  }

  return 0;
}

//verifica o tipo do caracter
int caracterVerify(char c) {
  if(c >= 'a' && c <= 'z') {
    return 1;
  }
  else if(c >= 'A' && c <= 'Z') {
    return 2;
  }
  else {return 0;}
}