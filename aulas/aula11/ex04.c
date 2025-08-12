/*Crie uma função que retorna o maior número em um vetor de inteiros*/

#include <stdio.h>
#define TAM 5

int maior(int *vetor, int tamanho);

int main() {
  int v[TAM], maiorNum;
  
  for (int i=0; i<TAM; i++) {
    printf("Digite o %d valor: ", i+1);
    scanf("%d", &v[i]);
  }
  
  maiorNum = maior(v, TAM);
  
  printf("\nMaior valor digitado: %d\n", maiorNum);
}

int maior(int *vetor, int tamanho) {
  int maior = -99999;
  
  for (int i=0; i<TAM; i++) {
    if (vetor[i] > maior)
      maior = vetor[i];
  }

  return maior;
}