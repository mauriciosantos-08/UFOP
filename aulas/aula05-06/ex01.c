//calcular a área de um círculo

#include <stdio.h>
#include <math.h>

int main()
{
  float raio, area;
  printf("\nDigite o valor do raio: ");
  scanf("%f", &raio);

  if (raio <= 0){
    printf("\nErro! Raio negativo ou nulo!\n");
  } else {
    area = 3.14 * pow(raio, 2);
    printf("\nValor da área: %.2f\n", area);
  }

  return 0;
}
