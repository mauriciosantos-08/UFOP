/*As temperaturas no campus da UFOP foram anotadas diariamente durante um determinado ano. Elabore um algoritmo que leia as 365 temperaturas e determine qual a temperatura m´edia registrada. O algoritmo dever´a tamb´em imprimir o valor das temperaturas abaixo da m´edia. Utilizar vetor na implementa¸c˜ao do algoritmo.*/

#include <stdio.h>
#define TAM 365

int main() {
  float temp[TAM], tempAbaixo[TAM], media;

  //preenchendo vetor temperatura
  for (int i=0; i<TAM; i++) {
    printf("Temperatura do %iº dia: ", i+1);
    scanf("%f", &temp[i]);
    media += temp[i];
  }

  //analisando valores abaixo da media
  media /= TAM;
  for (int i=0; i<TAM; i++) {
    if (temp[i] < media)
      tempAbaixo[i] = temp[i];
    else
      tempAbaixo[i] = -999;
  }

  //printando media e temperaturas abaixo da média
  printf("\n-> Média das temperaturas: %.1f", media);
  printf("\n-> Temperaturas abaixo da média:\n");
  for (int i=0; i<TAM; i++) {
    if (tempAbaixo[i] != -999)
      printf("%.1f\n", tempAbaixo[i]);
  }
  printf("\n");

  return 0;
}