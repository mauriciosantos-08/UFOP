/*Faça um programa em C para calcular a média harmônica de n valores digitados pelo usuário*/

#include <stdio.h>

int main() {
  int n;
  float soma = 0, media, aux;

  printf("\nCálculo da média harmônica\n");
  printf("Quantos números vc quer digitar? ");
  scanf("%d", &n);

  int i = 0;
  while (i < n) {
    printf("Número %d: ", i+1);
    scanf("%f", &aux);
    soma += 1/aux;
    i++;
  }

  media = n / soma;
  printf("\nMédia Harmônica: %.2f\n", media);
  
}