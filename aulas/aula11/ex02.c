/*Crie uma função que retorna o maior número em um vetor de inteiros*/

#include <stdio.h>
#define TAM 5

int maior(int *vetor, int tamanho);

int main() {
  int v[TAM], maiorNum;
  
  //recebendo valores
  printf("\n---VERIFICADOR DE MAIOR NÚMERO---\n");
  for (int i=0; i<TAM; i++) {
    printf("Digite o %dº valor: ", i+1);
    scanf("%d", &v[i]);
  }
  
  //chamando função
  maiorNum = maior(v, TAM);
  
  //imprimindo resultado
  printf("\nMaior número digitado: %d\n", maiorNum);
  
  return 0;
}

int maior(int *vetor, int tamanho) {
  int maior = -999999;
  for (int i=0; i<TAM; i++) {
    if (vetor[i] > maior)
      maior = vetor[i];
  }

  return maior;
}