/*Fa¸ca um algoritmo que, dados dois n´umeros e um caracter (+, –, *, /), indeterminadamente, e calcule e imprima:
a. A soma desses n´umeros, caso seja digitado o caracter +
b. A subtra¸c˜ao desses n´umeros, caso seja digitado o caracter –
c. A multiplica¸c˜ao desses n´umeros, caso seja digitado o caracter *
d. A divis˜ao desses n´umeros, caso seja digitado o caracter /
As opera¸c˜oes devem finalizar quando a opera¸c˜ao digitada for diferente de uma das anteriores.*/

#include <stdio.h>

int main(int argc, char *argv[]) {
  float res, n2;
  char op;
  
  printf("\n---CALCULADORA---\nSoma: +\nSubtração: -\nMultiplicação: *\nDivisão: /\n");
  
  printf("\nDigite o valor do primeiro número: ");
  scanf("%f", &res);
  do
  {
    printf("Operação a ser realizada: "); getchar();
    op = getchar();

    if (op=='+' || op=='-' || op=='*' || op=='/') {
      printf("Digite o valor do próximo número: ");
      scanf("%f", &n2);
      
      switch (op)
      {
        case '+':
          res += n2;
          break;

        case '-':
          res -= n2;
          break;

        case '*':
          res *= n2;
          break;

        case '/':
          res /= n2;
          break;
      }
      printf("\nResultado parcial = %.2f\n", res);
    }else
      printf("Operação inválida\n");
  } while (op=='+' || op=='-' || op=='*' || op=='/');
  
  printf("\nResultado Final = %.2f\n", res);
}