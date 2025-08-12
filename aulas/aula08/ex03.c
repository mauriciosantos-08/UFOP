/*Faça uma única função que converte um valor em metros para: (i) jardas; (ii) pés; e (iii) polegadas. Use a função no método main(). Dica: utilize o protótipo abaixo:
void dist(float metros, float *jardas, float *pes, float *polegadas); */

#include <stdio.h>

void dist(float metros, float *jardas, float *pes, float *polegadas);

int main() {
  float metros, jardas, pes, polegadas;

  //recebendo dados
  printf("\nDigite um valor em metros: ");
  scanf("%f", &metros);

  //chamando função e imprimindo resultado
  dist(metros, &jardas, &pes, &polegadas);
  printf("\nValor em jardas: %.4f\nValor em pes: %.4f\nValor em polegadas: %.4f\n", jardas, pes, polegadas);

  return 0;
}

//Lembre-se que 1 metro é igual a aproximadamente 1,094 jardas, 3,281 pés, e 39,3701 polegadas.
void dist(float metros, float *jardas, float *pes, float *polegadas) {
  *jardas = metros * 1.094;
  *pes = metros * 3.281;
  *polegadas = metros * 39.3701;
}