/*Escreva um algoritmo que leia um vetor de 20 posi¸c˜oes e mostre-o. Em seguida, troque o primeiro elemento com o ´ultimo, o segundo com o pen´ultimo, o terceiro com o antepen´ultimo, e assim sucessivamente. Mostre o novo vetor depois da troca*/

#include <stdio.h>
#define TAM 10

int main() {
  int v[TAM], aux;

  //preenchendo vetor
  for (int i=0; i<TAM; i++) {
    printf("Digite o %dº valor: ", i+1);
    scanf("%d", &v[i]);
  }
  
  printf("\nVETOR DIGITADO:\n");
    for (int i=0; i<TAM; i++)
      printf("%d ", v[i]);

  //invertendo valores
  for (int i=0; i<TAM/2; i++) {
    aux = v[i];
    v[i] = v[TAM-1-i];
    v[TAM-1-i] = aux;
  }

  //printando vetor resultante
  printf("\nRESULTADO:\n");
  for (int i=0; i<TAM; i++)
    printf("%d ", v[i]);

  printf("\n");
  return 0;
}