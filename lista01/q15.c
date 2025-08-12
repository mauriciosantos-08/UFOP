/*Crie e teste uma fun¸c˜ao void troca3(int a, int b, int c) que retorna a = b, b = c e c = a, ou seja, troca o conte´udo de 3 vari´aveis. E poss´ıvel? Caso n˜ao seja, aponte as altera¸c˜oes necess´arias no ´ prot´otipo da fun¸c˜ao*/


// não é possível alterar o valor de uma variável em uma função passando como parâmetro seu valor, logo será necessário alterar os parâmetros da função para ponteiros
#include <stdio.h>

//void troca3(int a, int b, int c);
void troca3(int *a, int *b, int *c);

int main() {
  int a, b, c;
  int *pa = &a, *pb = &b, *pc = &c;

  //recebendo dados
  printf("\nDigite o valor de a: ");
  scanf("%d", &a);
  printf("Digite o valor de b: ");
  scanf("%d", &b);
  printf("Digite o valor de c: ");
  scanf("%d", &c);

  //trocando valores
  printf("\nTrocando valores...");
  troca3(&a, &b, &c);

  //imprimindo valores trocados
  printf("\na = %d", *pa);
  printf("\nb = %d", *pb);
  printf("\nc = %d\n", *pc);

  return 0;
}

void troca3 (int *pa, int *pb, int *pc) {
  int aux = *pa;
  *pa = *pb;
  *pb = *pc;
  *pc = aux;
}