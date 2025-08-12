/*Crie um programa que leia a idade de uma pessoa e informe a sua classe eleitoral, de acordo com a
tabela
*/

#include <stdio.h>

int main() {
  int idade;

  printf("\nDigite sua idade: ");
  scanf("%d", &idade);

  if(idade<0){printf("\nIdade inválida\n");}
  else if(idade<16) {
    printf("\nNão-eleitor\n");
  } else if(idade<18 || idade>65) {
    printf("\nEleitor facultativo\n");
  } else{
    printf("\nEleitor obrigatório\n");
  }
}