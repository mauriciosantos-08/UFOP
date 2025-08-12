/*Crie uma fun¸c˜ao que recebe como parˆametro o ano (representado por um n´umero inteiro) e retorne 1 se o ano for bissexto e 0 caso contr´ario. Um ano ´e bissexto se for divis´ıvel por 4, mas n˜ao por 100. Um ano tamb´em ´e bissexto se for divis´ıvel por 400.*/

#include <stdio.h>

int ehBissexto(int);

int main() {
  int ano, res;

  //recebendo dados
  printf("\nDigite o ano: ");
  scanf("%d", &ano);

  //chamando função
  res = ehBissexto(ano);

  //analisando retorno e impriminido resultado
  if(res == 1) {
    printf("O ano %d é bissexto\n", ano);
  }
  else {printf("O ano %d não é bissexto\n", ano);}

  return 0;
}

//confere se o ano fornecido é bissexto
int ehBissexto(int ano) {
  if ( (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0) ) {
    return 1;
  } 
  else {return 0;}
}