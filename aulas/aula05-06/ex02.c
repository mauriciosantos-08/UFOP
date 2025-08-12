#include <stdio.h>

int main() {
  int n1, n2;

  printf("Digite dois números: ");
  scanf("%d%d", &n1, &n2);

  if (n1==n2) {
    printf("\nNúmeros iguais.\n");
  } else if (n1>n2) {
    printf("\n%d é é o maior número.\n", n1, n2);
  } else {
    printf("\n%d é o maior número.\n", n2, n1);
  }

  return 0;
}
