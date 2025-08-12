/*A convers˜ao de graus Farenheit para cent´ıgrados ´e obtida por C = 5/9×(F −32). Fa¸ca um algoritmoque calcule e imprima uma tabela de graus Celsius em fun¸c˜ao de graus Fahrenheit, que variam de 50 `a 150 de 1 em 1.*/

#include <stdio.h>

int main(int argc, char *argv[]) {
  float c = 50.0, f;
  printf("\nCONVERSÃO CELSIUS PARA FAHRENHEIT\n");
  for (int i=50; i<=150; i++) {
    f = ( c / (5.0/9) ) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit\n", c, f);
    c++;
  }
  
  return 0;
}