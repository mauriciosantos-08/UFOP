/*Crie um programa que leia o peso de uma pessoa no planeta Terra. Al´em disso, o usu´ario deve
selecionar um dos planetas da lista abaixo, para que seu peso naquele planeta seja calculado. A
f´ormula para c´alculo do peso ´e:

pesoNaTerra/100 * GravidadeRelativa

Calcule o peso e imprima uma mensagem dizendo qual ´e o planeta selecionado e qual ´e o peso calculado.
Caso seja escolhido um planeta que n˜ao consta da lista, uma mensagem de erro deve ser apresentada.
Use a instru¸c˜ao switch*/

#include <stdio.h>

int main() {
  float pesoNaTerra, gravRelativa, peso;
  char planeta;

  //recebendo peso na terra
  printf("\nDigite seu peso: ");
  scanf("%f", &pesoNaTerra);

  //selecionando o planeta
  printf("\n1- Mercurio\n2- Venus\n3- Marte\n4- Jupter\n5- Saturno\n6- Urano\n7- Netuno");
  printf("\nSelecione o planeta (número correspondente): ");
  scanf(" %c", &planeta);

  //calculando peso
  switch(planeta) {
    case '1':
    gravRelativa = 38;
    printf("\nPlaneta escolhido: Mercurio");
    break;

    case '2':
    gravRelativa = 89;
    printf("\nPlaneta escolhido: Venus");
    break;

    case '3':
    gravRelativa = 38;
    printf("\nPlaneta escolhido: Marte");
    break;

    case '4':
    gravRelativa = 254;
    printf("\nPlaneta escolhido: Jupter");
    break;

    case '5':
    gravRelativa = 107;
    printf("\nPlaneta escolhido: Saturno");
    break;

    case '6':
    gravRelativa = 80;
    printf("\nPlaneta escolhido: Urano");
    break;

    case '7':
    gravRelativa = 120;
    printf("\nPlaneta escolhido: Netuno");
    break;

    default:
    printf("Erro! Planeta inválido.");
    return 0;
  }

  peso = pesoNaTerra/100.0 * gravRelativa;

  //imprimindo resultado
  printf("\nPeso: %.2f\n", peso);

  return 0;
}