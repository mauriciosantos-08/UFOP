/*Crie um programa que leia dois numeros, imprima o quadrado do menor e a raiz quadrada do maior.
O programa deve tambem detectar se os numeros sao iguais, e neste caso, as outras operacoes nao
devem ser realizadas.*/

#include <stdio.h>
#include <math.h>

int main() {
  float n1, n2, menor, maior;

  //recebendo valores
  printf("\nDigite o valor do 1º número: ");
  scanf("%f", &n1);
  printf("\nDigite o valor do 2º número: ");
  scanf("%f", &n2);

  //verificando igualdade e calculando
  if (n1 == n2){
    printf("\nNúmeros iguais: %.2f\n", n1);
  } else if(n1>n2) {
    maior = pow(n1, 1.0/2);
    menor = pow(n2, 2);
  } else {
    menor = pow(n1, 2);
    maior = pow(n2, 1.0/2);
  }  

  //imprimindo resultado
  printf("\nQuadrado do menor: %.2f\nRaiz quadrada do maior: %.2f\n", menor, maior);

  return 0;
}