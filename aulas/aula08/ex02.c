/*Crie uma função que duplica o conteúdo da memória apontada por um ponteiro p. Utilize o protótipo a seguir:
void duplica(int *p);*/

#include <stdio.h>

void duplica(int *p);

int main() {
  int valor;

  //recebendo dados
  printf("\nDigite um valor: ");
  scanf("%d", &valor);

  //chamando função e imprimindo resultado
  duplica(&valor);
  printf("Valor duplicado: %d\n", valor);
  
  return 0;
}

void duplica(int *p) {
  *p *= 2;
}