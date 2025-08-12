/*Indique e corrija o erro do código a seguir:
1 int main()
2 {
3 int valor;
4 scanf("%d", &valor);
5
6 int *p = &valor;
7 p = p * p;
8 printf("Valor ao quadrado = %d\n", valor);
9
10 return 0;
11 }*/

//adicionar include da biblioteca stdio.h
#include <stdio.h>

int main() {
  int valor;
  scanf("%d", &valor);
  
  int *p = &valor;
  //para alterar o valor para onde o ponteiro aponta é necessário utilizar o caracter *
  *p *= *p;
  printf("Valor ao quadrado = %d\n", valor);

  return 0;
}