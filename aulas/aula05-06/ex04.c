/*
encontrar as raízes de uma eq do 2 grau
coeficientes reais
*/

#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c, delta, x1, x2;

  //recebendo valores
  printf("Digite o valor de a, b, c: ");
  scanf("%f%f%f", &a, &b, &c);

  //calculando e imprimindo resultado
  delta = pow(b, 2) - (4*a*c);

  if(delta<0) {
    printf("\nNão existem raízes reais. Discriminante negativo.\n");
  }else if(delta == 0) {
    x1 = -b/2*a;
    printf("Raíz: %.2f", x1);
  } else {
    x1 = (-b + sqrt(delta)) / 2*a;
    x2 = (-b - sqrt(delta)) / 2*a;
    printf("\n1a raíz: %2.f\n2a raíz: %2.f\n", x1, x2);
  }

  return 0;
}
