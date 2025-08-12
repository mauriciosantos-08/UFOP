//par ou impar

#include <stdio.h>

int main() {
  int n;
  printf("\nDigite um número: ");
  scanf("%d", &n);

  if (n%2 == 0) {
    printf("\n%d e par.\n", n);
  } else {
    printf("\n%d é impar.\n", n);
  }

  return 0;
}
