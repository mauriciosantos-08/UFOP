/*Escreva um programa - uma calculadora - que permite ao usuário efetuar as 4 operações (+, −, ∗, /) básicas diversas vezes. O programa solicita a operação e dois operandos para, em seguida, retornar o resultado. O programa termina quando a operação digitada for “#”. Para qualquer outro símbolo digitado diferente das 4 operações e do critério de parada, o programa deve informar que a operação é inválida*/

#include <stdio.h>

int main() {
  float n2, res = 0; 
  char op;

  printf("\n---CALCULADORA---\n"); 
  printf("Digite o 1º valor: "); 
  scanf("%f", &res);

  do{
    printf("\nDigite a operação desejada: "); getchar();
    op = getchar();
    switch(op) {
      case '+':
        printf("Digite o valor: "); 
        scanf("%f", &n2);
        res += n2;
        printf("Resultado parcial: %.2f\n", res);
        break;
        
      case '-':
        printf("Digite o valor: "); 
        scanf("%f", &n2);
        res -= n2;
        printf("Resultado parcial: %.2f\n", res);
        break;
        
      case '*':
        printf("Digite o valor: "); 
        scanf("%f", &n2);
        res *= n2;
        printf("Resultado parcial: %.2f\n", res);
        break;
        
      case '/':
        printf("Digite o valor: "); 
        scanf("%f", &n2);
        res /= n2;
        printf("Resultado parcial: %.2f\n", res);
        break;

      case '#':
        break;
          
      default:
        printf("Operação inválida!\n");
        break;
    }
  } while (op != '#');

  printf("Resultado Final = %.2f\n", res);

  return 0;
}