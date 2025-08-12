/*Suponha que exista 50 alunos em uma sala. Faça um programa que determina quantos desses alunos tem idade maior que 20 anos. O usuário (coitado) deve digitar a matrícula e idade de todos os 50 alunos.*/

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