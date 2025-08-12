/*Construa um algoritmo que leia um vetor de n posi¸c˜oes de inteiros e determine qual o maior e o menor valor existente neste vetor.*/

#include <stdio.h>

#define TAM 20

int main() {
  int v[TAM], t, maior = -999999, menor = 999999;

  do {
    printf("Digite a quantidade de valores que serão digitados (máx 20): ");
    scanf("%d", &t);
    if (t > TAM)
      printf("Valor inválido!");
  } while (t > t);
  
  for (int i=0; i<t; i++) {
    printf("Digite o %dº valor: ", i+1);
    scanf("%d", &v[i]);
  }

  for (int i=0; i<t; i++) {
    if (v[i] < menor)
      menor = v[i];
    else if (v[i] > maior)
      maior = v[i];
  }

  printf("\nMenor valor entre os digitados: %d", menor);
  printf("\nMaior valor entre os digitados: %d\n", maior);

  return 0;
}