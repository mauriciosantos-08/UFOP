/*Codifique um programa para gerar o n´umero H. O n´umero N, positivo e n˜ao nulo, e? fornecido pelo usu´ario atrav´es do teclado. E necess´aria a valida¸c˜ao da entrada
H = 1 + 1/2 + 1/3 + ... + 1/n*/

#include <stdio.h>

int main() {
  float h = 1; int n;

  printf("Digite o valor de N: ");
  scanf("%d", &n);

  for (int i=2; i<=n; i++) {
    h += 1.0/i;
  }

  printf("Valor de H = %.2f\n", h);

  return 0;
}