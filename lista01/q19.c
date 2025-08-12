/*Uma empresa classifica seus funcion´arios em 3 n´ıveis de acordo com um ´ındice de produtividade. S˜ao eles: (1) Excelente, (2) Intermedi´ario e (3) Regular. Cada n´ıvel adiciona ou subtrai uma porcentagem do funcion´ario, de acordo com a tabela abaixo. Crie um programa que leia o sal´ario base e o ´ındice de produtividade de um funcion´ario (um n´umero inteiro de 1 a 3). Em seguida, o programa deve calcular e imprima o sal´ario com o abono, seguindo a tabela a seguir. Crie uma fun¸c˜ao para calcular o sal´ario*/

#include <stdio.h>

void calculaSalario(float *, int);

int main(int argc, char *argv[]) {
  int indice; float salario;

  printf("Digite o salário atual: R$");
  scanf("%f", &salario);
  printf("Digite o índice de produtividade (1 a 3): ");
  scanf("%d", &indice);

  calculaSalario(&salario, indice);

  if (salario != 0)
    printf("Salário com reajuste: R$%.2f\n", salario);
  else
    printf("Erro! Índice inválido.\n");

  return 0;
}

void calculaSalario(float *sal, int ind) {
  switch(ind) {
    case 1:
      *sal *= 1.65;
      break;
      
    case 2:
      *sal *= 1.35;
      break;
      
    case 3:
      *sal *= 0.88;
      break;
      
    default:
      *sal = 0;
      break;
  }
}