/*Crie um programa que apresente, na tela de abertura, um menu com opções para:
1. inserir uma nova pessoa: nome, altura e ano de nascimento;
2. listar todos os nomes e respectivas alturas;
3. listar os nomes das pessoas que nasceram depois de um certo ano.
Cada uma destas opções deve ser implementada em uma função separada. O programa deve ser capaz de armazenar dados de até 100 pessoas*/

#include <stdio.h>
#include <string.h>
#define TAM_MAX 100

typedef struct {
  char nome[50];
  float altura;
  int anoNasc;
} Pessoa;

void add(Pessoa pessoas[], int i);
void list(Pessoa pessoas[], int x);
void listYear(Pessoa pessoas[], int x, int ano);

int main() {
  int op, i=0, ano;
  Pessoa pessoas[TAM_MAX];
  
  do {
    printf("\n---MENU---\n1. Inserir uma nova pessoa\n2. Listar todos os nomes e respectivas alturas\n3. Listar os nomes das pessoas que nasceram depois de um certo ano\n0. Sair\nEscolha sua opção: ");
    scanf("%d", &op);
    
    switch (op) {
      case 1:
      add(pessoas, i);
      i++;
      break;
      
      case 2:
      list(pessoas, i);
      break;
      
      case 3:
      printf("Digite o ano a ser comparado: ");
      scanf("%d", &ano);
      listYear(pessoas, i, ano);
      break;
      
      case 0:
      break;
      
      default:
      printf("Opção inválida!\n");
      break;
    }
  } while (op != 0 || i>99);

  return 0;
}

void add(Pessoa pessoas[], int i) {
  printf("\nAdicionando nova pessoa...");
  
  //nome
  printf("\nDigite o nome: ");
  getchar();
  fgets(pessoas[i].nome, 50, stdin);
  int tam = strlen(pessoas[i].nome);
  if (tam<50)
    pessoas[i].nome[tam-1] = '\0'; //retirando \n
  
  //altura
  printf("Digite a altura: ");
  scanf("%f", &pessoas[i].altura);
  
  //ano de nascimento
  printf("Digite o ano de nascimento: ");
  scanf("%d", &pessoas[i].anoNasc);
}

void list(Pessoa pessoas[], int x) {
  printf("\n\nListando pessoas cadastradas...\n");
  for (int i=0; i<x; i++)
  printf("\nNome: %s\nAltura: %.2f\n", pessoas[i].nome, pessoas[i].altura);
}

void listYear(Pessoa pessoas[], int x, int ano) {
  printf("Listando pessoas que nasceram depois de %d...", ano);
  for (int i=0; i<x; i++)
    if (pessoas[i].anoNasc >= ano)
      printf("\nNome: %s\nAno de Nascimento: %d\n", pessoas[i].nome, pessoas[i].anoNasc);
}