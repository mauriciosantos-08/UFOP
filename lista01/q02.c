/*Crie um programa que leia 3 numeros reais e os imprima em ordem crescente. Suponha que numeros
iguais nao serao digitados.*/

#include <stdio.h>

int main() {
  float valores[3];
  int i, j, aux;

  //recebendo valores
  for (i=0; i<3; i++){
    printf("Digite o %dº valor: ", i+1);
    scanf("%f", &valores[i]);
  }

  //ordenando valores
  for(i=0; i<2; i++) {
    for(j = 0; j<2; j++) {
      if(valores[j+1] < valores[i]) {
        aux = valores[i];
        valores[i] = valores[j+1];
        valores[j+1] = aux;
      }
    }
  }

  //imprimindo lista
  printf("\nValores ordenados em ordem crescente:\n");
  for(i=0; i<3; i++) {
    printf("%.2f\n", valores[i]);
  }
  
  return 0;
}