/*Escreva uma macro que receba um n´umero como argumento e determina se o mesmo ´e par ou ´ımpar*/

#include <stdio.h>
//macro par-impar
#define PAR_IMPAR(n) ((n) % 2 == 0 ? "Par" : "Impar")

int main() {
  int n;

  printf("\nDigite um valor: ");
  scanf("%d", &n);

  printf("\nO número %d é %s.\n", n, PAR_IMPAR(n));
}