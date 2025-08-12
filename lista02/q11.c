/*Codifique um programa para calcular o valor de S, dado por
S = 1/N + 2/N-1 + 3/N-2 + ... + N-1/2 + N
onde N ´e um n´umero positivo, n˜ao nulo e fornecido pelo usu´ario atrav´es do teclado. E necess´aria a valida¸c˜ao da entrada
*/

#include <stdio.h>

int main() {
  int n; float s;

  //recebendo valor de N
  do {
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    if(n<=0)
      printf("Valor inválido! Digite Novamente.\n");
  } while (n<=0);

  //calculando S
  s += (n-1 / 2.0) + n;

  for (int i=1; i<n-2; i++){
    s += i / (float)n;
    n--;
  }

  //imprimindo resultado
  printf("Valor de S = %.2f\n", s);
  return 0;
}