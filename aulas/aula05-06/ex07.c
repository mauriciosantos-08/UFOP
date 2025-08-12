/*Escreva um programa que indique o número de dias existentes em um
mês*/

#include <stdio.h>

int main() {
  int mes, numDias;

  //recebendo mes
  printf("\nDigite o número do mês: ");
  scanf("%d", &mes);

  //verificando qtd de dias
  switch(mes) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    numDias = 31;
    break;
    
    case 4: case 6: case 9: case 11:
    numDias = 30;
    break;

    case 2:
    numDias = 28;
    break;

    default:
    printf("Mês inválido digitado.");
    return 0;
  }

  printf("\nO mês selecionado possui %d dias.\n", numDias);
}