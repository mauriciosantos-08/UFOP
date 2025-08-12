/*Desenvolva uma fun¸c˜ao que recebe o peso (kg) e a altura (m) de uma pessoa e imprime o seu ´Indice
de Massa Corporal (IMC)
imc = peso / altura²*/

#include <stdio.h>
#include <math.h>

int main()
{
  float peso, altura, imc;

  //recebendo valores
  printf("Digite seu peso (em kg): ");
  scanf("%f", &peso);

  printf("Digite sua altura (em cm): ");
  scanf("%f", &altura);
  altura /= 100;

  //calculando e imprimindo imc
  imc = peso / pow(altura, 2);
  printf("Seu IMC é %.1f\n", imc);

  return 0;
}
