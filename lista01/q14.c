/*Crie um jogo de dados simplificado. Considere dois dados c´ubicos (6 lados). Inicialmente, leia a aposta do usu´ario, ou seja, o valor que ele acha que sair´a na soma dos dados. Depois, simule o lan¸camento dos dados, fa¸ca a soma dos valores e verifique se o usu´ario acertou a aposta*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lancamento(int *);

int main() {
  int aposta, soma;
  int *p = &soma;

  do {
    //recebendo aposta
    printf("\nDigite sua aposta (2 a 12): ");
    scanf("%d", &aposta);
    printf("Aposta registrada!\nLançando dados...\n");
    
    //realizando lançamento dos dados
    lancamento(&soma);
    
    //imprimindo resultado
    printf("\nResultado do lançamento:\nSoma = %d", soma);
    if (aposta == soma) {
      printf("\nParabéns! Você acertou.\n");
      break;
    } else {printf("\nTente novamente...\n");}
  } while (aposta != soma);
}

//lançamento dos dados
void lancamento(int *p) {
    //alterando semente e sorteando valor
    srand(time(NULL));
    *p = rand() % 11 + 2;
}