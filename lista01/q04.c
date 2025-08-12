/*Um comerciante comprou um produto e quer vendˆe-lo com um lucro de 45% se o seu valor for menor
que R$ 20,00; caso contr´ario, o lucro ser´a de 30%.
Crie um programa para ler o valor de um ´unico produto e imprimir o valor de venda, j´a com o lucro
embutido.*/

#include <stdio.h>

int main() {
  float valor;

  //recebendo valor
  printf("\nDigite o valor do produto: ");
  scanf("%f", &valor);
  
  //calculando valor de venda
  if(valor < 20.0) {
    valor *= 1.45;
  } else {
    valor *= 1.3;
  }

  //imprimindo valor de venda
  printf("\nValor de venda: R$%.2f\n", valor);

  return 0;
}