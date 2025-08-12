/*Dada uma matriz (4×5), calcular a soma de todos os elementos da matriz. Calcular também o somatório dos elementos de cada linha da matriz, armazenando o somatório em um vetor.*/

#include <stdio.h>
#define L 4
#define C 5

int main(int argc, char *argv[]) {
  int mat[L][C], contLinha[L], contTotal = 0;

  //preenchendo valores
  for (int i=0; i<L; i++) {
    printf("preenchendo %dª linha...\n", i+1);
    
    contLinha[i] = 0;
    for (int j=0; j<C; j++) {
      printf("Digite o %dº valor: ", j+1);
      scanf("%d", &mat[i][j]);
      contLinha[i] += mat[i][j];
    }

    contTotal += contLinha[i];
  }

  //imprimindo resultado
  printf("\nSoma total dos elementos: %d", contTotal);
  for (int i=0; i<L; i++) {
    printf("\nSoma da %dº linha: %d", i+1, contLinha[i]);
  }

  printf("\n");
  return 0;
}