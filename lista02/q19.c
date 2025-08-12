/*Elaborar um algoritmo que lˆe um conjunto de 30 valores e os coloca em 2 vetores conforme forem pares ou ´ımpares. Terminada a entrada dos n´umeros escrever o conte´udo dos dois vetores.*/

#include <stdio.h>
#define TAM 30

int main() {
  int pares[TAM], impares[TAM], aux;

  for (int i=0; i<TAM; i++) {
    printf("Digite o %dº valor: ", i+1);
    scanf("%d", &aux);

    if (aux % 2 == 0){
      pares[i] = aux;
      impares[i] = 99999;
    }else {
      impares[i] = aux;
      pares[i] = 99999;
    }
  }

  //imprimindo pares
  printf("\nValores pares digitados:\n");
  for (int i=0; i<TAM; i++)
  if (pares[i] != 99999)
  printf("%d\n", pares[i]);
  
  //imprimindo impares
  printf("\nValores impares digitados:\n");
  for (int i=0; i<TAM; i++)
    if (impares[i] != 99999)
      printf("%d\n", impares[i]);

  return 0;
}