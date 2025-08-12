/*Crie um programa que leia 5 numeros inteiros e determine qual deles ´e o menor. Imprima o resultado
na tela.*/

#include <stdio.h>

int main() {
  int valores[5], menor;

  //recebendo valores
  for (int i = 0; i < 5; i++){
    printf("\nDigite o %dº valor: ", i+1);
    scanf("%d", &valores[i]);
  }

  //verificando menor
  menor = valores[0];
  for(int i=0; i<5; i++) {
    if(valores[i] < menor) {
      menor = valores[i];
    }
  }

  printf("\nO menor número digitado é: %d\n", menor);

  return 0;
}