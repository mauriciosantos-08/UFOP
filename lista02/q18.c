/*Escreva um algoritmo que receba 10 n´umeros pelo teclado, armazene esses n´umeros em um vetor. Em seguida, o programa inverte os elementos do vetor, gerando um novo vetor com os elementos invertidos. O programa imprime o vetor original e o vetor invertido e os mostre em ordem inversa.*/

#include <stdio.h>
#define TAM 10

int main() {
  int v1[TAM], v2[TAM];

  //preenchendo vetor 1 e 2
  printf("\n---Preenchendo vetor---\n");
  for (int i=0; i<TAM; i++) {
    printf("Digite o %dº valor: ", i+1);
    scanf("%d", &v1[i]);

    v2[TAM-1-i] = v1[i];
  }

  //printando vetor
  printf("\nImprimindo vetor:\n");
  for (int i=0; i<TAM; i++)
    printf("v1[%d] = %d\n", i, v1[i]);

  //printando vetor invertido
  printf("\nImprimindo vetor invertido:\n");
  for (int i=0; i<TAM; i++)
    printf("v1[%d] = %d\n", i, v2[i]);

  return 0;
}