/*Crie uma função que recebe a idade de uma pessoa e imprime a sua
classe eleitoral, de acordo com a tabela*/

#include <stdio.h>

int classeEleitoral(int idade);

int main() {
  int idade;

  //recebendo idade
  printf("\nDigite sua idade: ");
  scanf("%d", &idade);

  //verificando classe eleitoral e imprimindo resultado
  switch (classeEleitoral(idade))
  {
  case 1:
    printf("\nNão-eleitor\n");
    break;
    
    case 2:
    printf("\nEleitor facultativo\n");

    case 3:
    printf("\nEleitor obrigatório\n");
    break;

    default:
    printf("Idade inválida\n");
    break;
  }

  return 0;
}

// verifica classe eleitoral 
int classeEleitoral(int idade) {
  if(idade < 0) return 0;
  else if(idade < 16) return 1;
  else if(idade < 18 || idade > 65) return 2;
  else return 3;
}
