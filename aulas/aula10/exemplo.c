#include <stdio.h>

void troca(int *, int *);
int calcMdc(int, int);

int main(int argc, char const *argv[]) {
  int mdc, x, y;

  printf("Digite o valor de x e y: ");
  scanf("%d%d", &x, &y);
  
  mdc = calcMdc(x, y);
  printf("MDC entre %d e %d é: %d\n", x, y, mdc);

  return 0;
}

int calcMdc(int x, int y){
  int resto;

  //garantir que x >= y
  if (x < y)
    troca(&x, &y);
  
  do {
    resto = x % y; //calcula resto da divisão
    x = y; //armazena o MDC atual
    y = resto; // atualiza o valor de y para o resto
  } while (resto != 0);

  return x;
}

void troca(int *x, int *y) {
  int aux = *x;
  *x = *y;
  *y = aux;
}