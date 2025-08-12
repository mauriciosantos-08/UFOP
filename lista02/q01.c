/*Suponha que para cada aluno de sua sala exista uma ficha contendo a matr´ıcula e a idade do aluno. Supondo que exista 50 alunos, fa¸ca uma algoritmo que determine quantos desses alunos tem idade maior que 20*/

#include <stdio.h>

int main(int argc, char *argv[]) {
  int i = 0, cont = 0;
  int mat[50];

  do {
    int aux;
    printf("\nDigite a %dª matricula: ", i+1);
    scanf("%d", &mat[i]);

    printf("Digite a idade: ");
    scanf("%d", &aux);

    if (aux > 20)
      cont++;

    i++;
  } while (i < 50);

  printf("\nExistem %d alunos com mais de 20 anos\n", cont);

  return 0;
}