/*Crie um procedimento (que “retorna” void) que recebe a referˆencia de uma vari´avel (ponteiro) e some 5 caso o conte´udo da vari´avel seja um n´umero par ou 8 caso este conte´udo seja ´ımpar. Crie um m´etodo main para ler um n´umero e imprimir o resultado*/

#include <stdio.h>

void soma(int *);

int main(int argc, char *argv[]){
  int n;

  printf("Digite um numero: ");
  scanf("%d", &n);

  soma(&n);

  printf("Valor final: %.d\n", n);

  return 0;
}

void soma(int *n) {
  if (*n % 2 == 0)
    *n += 5;
  else
    *n += 8;
}