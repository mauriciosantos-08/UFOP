/*Codifique um programa que faça a leitura de dois número reais. A
seguir o programa lê um caractere, que deve ser +, -, * ou /, e realiza
a operação indicada pelo caractere sobre os valores lidos.
O programa deve imprimir o resultado da operação realizada sobre
eles, como mostra o exemplo a seguir (exibindo exatamente duas
casas decimais):
Seu programa deve usar o comando switch.
*/

#include <stdio.h>

int main() {
  float n1, n2, res;
  char op;

  //recebendo valores e operador
  printf("\nDigite o primeiro valor: ");
  scanf("%f", &n1);
  
  printf("\nDigite o segundo valor: ");
  scanf("%f", &n2);

  printf("\nDigite o operador (+, -, * ou /): ");
  scanf(" %c", &op);

  //realizando operação
  switch(op) {
    case '+':
    res = n1 + n2;
    break;
    
    case '-':
    res = n1 - n2;
    break;

    case '*':
    res = n1 * n2;
    break;

    case '/':
    res = n1 / n2;
    break;

    default:
    printf("\nOperador inválido.\n");
    return 0;
  }

  //imprimindo resultado
  printf("\nResultado: %.2f %c %.2f = %.2f\n", n1, op, n2, res);

  return 0;
}