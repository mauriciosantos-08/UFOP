/*Fa¸ca um programa para tabular a fun¸c˜ao:
f(x,y) = (x^4 + 3xy + y^3) / (2xy + 3x + 4y + 2)
para x = 2, 4, 6, 8 e y = 1, 3, 5, 7, 9, para cada valor de x. Devem ser impressos os valores de x, de y e de f(x, y). Use la¸cos aninhados.*/

#include <stdio.h>
#include <math.h>

float calcula(float, float);

int main() {
  float res;
  for (int i=2; i<9; i+=2) {
    printf("\n--- X = %d ---", i);
    for (int j=1; j<10; j+=2) {
      res = calcula(i, j);
      printf("\nY = %d\nResultado = %.2f", j, res);
    }
    printf("\n");
  }
}

float calcula(float x, float y) {
  return ((pow(x, 4) + 3*x*y + pow(y, 3)) / (2*x*y + 3*x + 4*y + 2));
}