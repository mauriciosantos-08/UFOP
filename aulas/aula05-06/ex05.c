/*Escreva um programa que leia o código de um determinado produto e
mostre a sua classificação*/

#include <stdio.h>

int main() {
  char cod;

  //recebendo codigo
  printf("\nDigite o código desejado(1 a 4): ");
  scanf(" %c", &cod);

  //escolhendo e imprimindo
  switch (cod){
    case '1':
    printf("\nAlimento não perecível\n");
    break;

    case '2':
    printf("\nAlimento perecível\n");
    break;

    case '3':
    printf("\nVestuário\n");
    break;

    case '4':
    printf("\nLimpeza\n");
    break;

    default:
    printf("\nCódigo não cadastrado\n");
  }

  return 0;
}

