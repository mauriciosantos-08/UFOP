/*Codifique um programa para gerar o n´umero H, a partir dos N primeiros termos, onde N ´e um n´umero positivo, n˜ao nulo e fornecido pelo usu´ario atrav´es do teclado. E necess´aria a valida¸c˜ao da entrada
H = 1 - 1/3 + 1/5 - 1/7 + 1/9 ... 1/n*/

#include <stdio.h>

int main() {
  int n; float h = 1, aux = 0;

  //recebendo valor de n
  printf("Digite o valor de N: ");
  scanf("%d", &n);

  //acumulando números que vão subtrair em h
  for (int i=3; i<=n; i+=4) {
    aux += 1.0/i;
  }
  h -= aux;
  aux = 0;

  //acumulando números que vão somar em h
  for (int i=5; i<=n; i+=4) {
    aux += 1.0/i;
  }
  h += aux;

  //imprimindo resultado
  printf("Valor de H = %.2f\n", h);
}