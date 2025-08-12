/*Apresente um programa em C que imprime uma tabela contendo a tabuada de multiplicação de 1 a 20 ignorando os números pares.*/

#include <stdio.h>

int main() {
  printf("  ");
  for (int i=1; i<=20; i++) {
    printf("%5d", i);
  }
  
  printf("\n");
  for (int i=1; i<=20; i++) {
    printf("-----");
  }
  printf("\n");
  
  for (int i=1; i<=20; i++) {
    printf("%d |", i);
    for (int j=1; j<=20; j++)
    {
      printf("%5d", i*j);
    }
    printf("\n");
  } 
}