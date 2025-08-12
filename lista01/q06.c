/*Crie um programa que lˆe um caractere e determine se o dado lido ´e uma letra min´uscula (a-z),
mai´uscula (A-Z) ou n˜ao (!, @, #, $, %, 1, 2, 3, etc)*/

#include <stdio.h>

int main() {
  char maiusc[27];
  char minusc[27];
  char caracter;
  int aux;

  //alimentando vetores
  for (int i = 0; i < 26; i++) {
    maiusc[i] = 'A' + i;
  }
  maiusc[26] = '\0';

  for (int i = 0; i < 26; i++) {
    minusc[i] = 'a' + i;
  }
  minusc[26] = '\0';

  //recebendo valor
  printf("\nDigite um caracter: ");
  scanf("%c", &caracter);

  //verificando caracter
  aux = 0;
  for(int i=0; i<27; i++) {
    if(caracter == maiusc[i]) {
      printf("\nO caracter digitado é uma Letra Maiúscula.\n");
      aux = 1;
      break;
    } else if(caracter == minusc[i]) {
      printf("\nO caracter digitado é uma Letra Minúscula.\n");
      aux = 1;
      break;
    }
  }

  if(aux == 0) {
    printf("\nO caracter digitado não é uma letra.\n");
  }
}