/*Elabore um algoritmo que inicialize um vetor de 50 posi¸c˜oes de inteiros (os valores devem ser lidos atrav´es do teclado) e, em seguida, calcule e imprima a soma desses elementos.*/

#include <stdio.h>
#define TAM 50

int main() {
  int v[TAM], soma = 0;

  for (int i=0; i<TAM; i++) {
    printf("Digite o %dº valor: ", i+1);
    scanf("%d", &v[i]);
    soma += v[i];
  }

  printf("\nA soma dos valores é: %d\n", soma);
  return 0;
}