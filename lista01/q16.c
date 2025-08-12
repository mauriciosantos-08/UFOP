/*Crie e teste uma fun¸c˜ao/procedimento void ord3(int a, int b, int c) que devolve em ordem crescente os valores contidos em a, b e c. Por exemplo, se a = 5, b = 4 e c = 3, ap´os a chamada a fun¸c˜ao ord3 teremos: a = 3, b = 4 e c = 5. E poss´ıvel implementar esta fun¸c˜ao/procedimento com o prot´otipo apresentado? Caso n˜ao seja ´ poss´ıvel, aponte as altera¸c˜oes necess´arias.*/

// não é possível alterar o valor de uma variável em uma função passando como parâmetro seu valor, logo será necessário alterar os parâmetros da função para ponteiros
#include <stdio.h>

//void ord3(int a, int b, int c);
void ord3(int *a, int *b, int *c);

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

  //chamada da função e impressão do resultado
  ord3(&a, &b, &c);
  printf("\nOrdenando...");
  printf("\na = %d\nb = %d\nc = %d\n", *pa, *pb, *pc);

  return 0;
}

void ord3(int *a, int *b, int *c) {
  int n1 = *a; int n2 = *b; int n3 = *c;
  int ord[3];
  ord[0] = n1; ord[1] = n2; ord[2] = n3; 

  //ordenando vetor
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      if (ord[j+1] < ord[i]) {
        int aux = ord[i];
        ord[i] = ord[j+1];
        ord[j+1] = aux;
      }
    }
  }

  //passando valores para os ponteiros
  *a = ord[0];
  *b = ord[1];
  *c = ord[2];
}