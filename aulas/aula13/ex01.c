/*Faça um programa que lê e imprime uma matriz 4×3 (4 linhas e 3 colunas).*/

#include <stdio.h>
#define L 4
#define C 3

int main(int agc, char *argv[]) {
  int mat[4][3];

  for (int i=0; i<4; i++) {
    printf("\nPreenchendo %dª linha...\n", i+1);
    for (int j=0; j<3; j++) {
      printf("Digite o %dº valor: ", j+1);
      scanf("%d", &mat[i][j]);
    }
  }

  printf("\nMATRIZ RESULTANTE:");
  for (int i=0; i<L; i++) {
    printf("\n");
    for (int j=0; j<C; j++)
      printf("%d ", mat[i][j]);
  }

  printf("\n");
  return 0;
}