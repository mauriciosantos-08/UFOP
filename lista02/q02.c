/*Elabore um algoritmo que leia o sal´ario atual de cada um dos 30 funcion´arios de uma firma e calcule e imprima o novo sal´ario com percentual de reajuste dependendo do sal´ario atual conforme a seguinte Tabela*/

#include <stdio.h>

int main(int argc, char *argv[]) {
  float sal[30], aux;

  //recebendo salarios
  for (int i=0; i<30; i++) {
    printf("Digite o %dº salario: ", i+1);
    scanf("%f", &aux);
    if (aux < 1000.0)
      sal[i] = aux * 1.15;
    else if (aux < 2000.0)
      sal[i] = aux * 1.1;
    else
      sal[i] = aux * 1.05;
  }

  //imprimindo salarios com reajuste
  printf("\n");
  for (int i=0; i<30; i++) {
    printf("%dº salário com resjuste: R$%.2f\n", i+1, sal[i]);
  }
  
  return 0;
}