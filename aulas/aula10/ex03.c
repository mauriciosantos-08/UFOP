#include <stdio.h>

void troca(int *, int *);

int main() {
  int x, y;

  printf("Digite os valores para x e y: ");
  scanf("%d%d", &x, &y);

  if (x < y)
    troca(&x, &y);

  //imprimindo cabecalho
  printf("\nTabuada de multiplicação!\n\n");
  printf("   | ");
  for (int j = y; j <= x; j++) {
    printf("%3d ", j);
  }
  printf("\n----");
  for (int j = y; j <= x; j++) {
    printf("----");
  }
  printf("\n");

  //calculando valores
  for (int j = y; j <= x; j++) {
    printf("%2d | ", j);
    for (int i = y; i <= x; i++) {
      printf("%3d ", i*j);
    }
    printf("\n");
  }

  return 0;
}

void troca(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}