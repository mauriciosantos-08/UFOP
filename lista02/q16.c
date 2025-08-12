/*Construa um algoritmo que leia dois vetores A e B e gere um terceiro vetor C, formado pela soma dos dois outros (A e B).*/

#include <stdio.h>
#define TAM 5

int main() {
  int v1[TAM], v2[TAM], v3[TAM];

  //preenchento vetor 1
  printf("\n---Preenchento vetor 1---\n");
  for (int i=0; i<TAM; i++) {
    printf("Digite o %dº valor: ", i+1);
    scanf("%d", &v1[i]);
  }

  //preenchendo vetor 2 e 3
  printf("\n---Preenchendo vetor 2---\n");
  for (int i=0; i<TAM; i++) {
    printf("Digite o %d valor: ", i+1);
    scanf("%d", &v2[i]);
    v3[i] = v2[i] + v1[i];
  }

  //printando vetor 3
  printf("\n---Valores do vetor 3---\n");
  for (int i=0; i<TAM; i++)
    printf("v3[%d] = %d\n", i, v3[i]);

  return 0;
}