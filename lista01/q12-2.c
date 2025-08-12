/*Crie uma fun¸c˜ao em C que recebe um n´umero real como parˆametro (entre outros) e retorna sua parte inteira em uma vari´avel e sua parte decimal em outra. Utilize passagem por referˆencia.*/

#include <stdio.h>
#include <math.h>

void divideNum(float, int *, int *);

int main() {
  float num;
  int parteInteira, parteDecimal;
  
  //recebendo valor
  printf("\nDigite um número: ");
  scanf("%f", &num);
  
  //chamando função
  divideNum(num, &parteInteira, &parteDecimal);
  
  //imprimindo resultado
  printf("\nParte inteira: %d\nParte decimal: %d\n", parteInteira, parteDecimal);
}


void divideNum(float num, int *pInteira, int *pDecimal) {
  double parteDecimal, parteInteira;

    // Separar parte inteira e decimal e armazena a parte inteira
    parteDecimal = modf(num, &parteInteira);

    // Passando parte inteira para o ponteiro
    *pInteira = (int)parteInteira;

    // Armazenar a parte decimal como inteiro com 3 casas
    *pDecimal = (int)(parteDecimal * 1000);
}