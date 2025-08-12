/*Escreva um programa que imprima o quadrado dos números inteiros, no intervalo fechado de 1 a 20. A seguir, um exemplo de execução do programa.*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
  
  printf("\nQUADRADO DOS PRIMEIROS 20 NATURAIS\n");
  for (int i = 1; i<=20; i++) {
    int aux = pow(i, 2);
    printf("%d ", aux);
  }
  printf("\n");

  return 0;
}