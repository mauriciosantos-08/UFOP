/*Crie uma função que retorna a média dos valores de um vetor de double. Utilize aritmética de ponteiros neste exercício.*/

#include <stdio.h>
#define TAM 5

double media(double vetor[], int tamanho);

int main() {
  double vetor[TAM], med;
  
  //preenchendo vetor
  for (int i=0; i<TAM; i++) {
    printf("Digite o %dº valor: ", i+1);
    scanf("%lf", &(*(vetor+i)));
  }
  
  //calculando média
  med = media(vetor, TAM);
  
  //imprimindo resultado
  printf("\nMédia entre os valores digitados: %.1lf\n", med);
  
  return 0;
}

double media(double vetor[], int tamanho) {
  double med = 0;

  for (int i=0; i<TAM; i++) {
    med += *(vetor+i);
  }
  
  return med/TAM; 
}