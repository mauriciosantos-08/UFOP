/*Um professor possui 5 turmas, e cada turma possui 40 alunos. Construa um algoritmo que leia a nota dos alunos de cada uma das turma e exiba a m´edia das notas por turma.*/

#include <stdio.h>

int main() {
  float notas[5][40];   // 5 turmas, 40 alunos cada (5 linhas, 40 colunas)
  float media[5];       // média de cada turma

  // inicializa as médias com 0
  for (int i = 0; i < 5; i++) {
    media[i] = 0;
  }

  // recebe notas e calcula soma por turma
  for (int i=0; i<5; i++) {
    printf("\n--- NOTAS DA %dª TURMA ---\n", i+1);
    for (int j=0; j<40; j++) {
        printf("Nota do %dº aluno: ", j+1);
        scanf("%f", &notas[i][j]);
        media[i] += notas[i][j];
    }
    media[i] /= 40.0;  // calcula média da turma
  }
  
  // exibe as médias
  printf("\n--- MÉDIAS POR TURMA ---\n");
  for (int i=0; i<5; i++) {
    printf("Turma %d: Média = %.2f\n", i+1, media[i]);
  }
  
  return 0;
}