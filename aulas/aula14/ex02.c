/*Crie uma estrutura (struct) para armazenar dados de um funcionário:
1. nome (até 50 caracteres),
2. função (até 50 caracteres),
3. idade,
4. salário.
Em seguida, crie um programa que lê os dados de n funcionários.*/

#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
  char nome[50], funcao[50];
  int idade;
  float salario;
} Funcionario;

int main() {
  Funcionario funcionarios[MAX];
  int n;

  printf("Digite a quantidade de funcionários a serem adicionados: ");
  scanf("%d", &n);

  for (int i=0; i<n; i++) {
    printf("\npreenchendo dados do %dº funcionário...\n", i+1);
    
    //nome
    getchar();
    printf("Digite o nome: ");
    fgets(funcionarios[i].nome, 50, stdin);
    int tam = strlen(funcionarios[i].nome);
    if (tam<50)
      funcionarios[i].nome[tam-1] = '\0';

    //funcao
    printf("Digite a função: ");
    fgets(funcionarios[i].funcao, 50, stdin);
    tam = strlen(funcionarios[i].funcao);
    if (tam<50)
      funcionarios[i].funcao[tam-1] = '\0';

    //idade
    printf("Digite a idade: ");
    scanf("%d", &funcionarios[i].idade);

    //salario
    printf("Digite o salário: R$");
    scanf("%f", &funcionarios[i].salario);
  }

  //imprimindo resultado
  printf("\nFuncionários cadastrados:\n");
  for (int i=0; i<n; i++) {
    printf("\nNome: %s\nFunção: %s\nIdade: %d\nSalário: R$%.2f\n", funcionarios[i].nome, funcionarios[i].funcao, funcionarios[i].idade, funcionarios[i].salario);
  }


  return 0;
}