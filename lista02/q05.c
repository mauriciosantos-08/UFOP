/*Uma certa firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou n˜ao de um novo produto lan¸cado por eles. Para isso, forneceu o sexo do entrevistado e sua resposta (sim ou n˜ao). Sabendo-se que foram entrevistadas 2.000 pessoas, elabore um algoritmo que calcule e imprima:
a. O n´umero de pessoas que responderam sim;
b. O n´umero de pessoas que responderam n˜ao;
c. A porcentagem de pessoas do sexo feminino que responderam sim;
d. A porcentagem de pessoas do sexo masculino que responderam n˜ao*/

#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv []) {
  int contSimM = 0, contSimF = 0, contNaoM = 0, contNaoF = 0;
  char sx, op;
  
  //teste com 10 pessoas
  for (int i=0; i<10; i++) {
    printf("\n%d - Gostou do produto(s/n)? ", i+1);
    op = toupper(getchar());

    printf("Digite seu sexo(m/f): "); getchar();
    sx = toupper(getchar());
    getchar();

    if (op == 'S') {
      switch (sx) {
      case 'M':
        contSimM++;
        break;
      
      case 'F':
        contSimF++;
        break;
      
      default:
        printf("Sexo inválido!\n");
        break;
      }
    }else if (op == 'N') {
      switch (sx) {
      case 'M':
        contNaoM++;
        break;
      
      case 'F':
        contNaoF++;
        break;
      
      default:
        printf("Sexo inválido!\n");
        break;
      }
    }else
      printf("Resposta inválida!\n");
  }

  float total = contSimM + contSimF + contNaoM + contNaoF;
  
  printf("\n---RESULTADO---\n");
  printf("Número de pessoas que responderam sim: %d\n", contSimM + contSimF);
  printf("Número de pessoas que responderam não: %d\n", contNaoM + contNaoF);
  printf("Porcentagem de pessoas do sexo feminino que responderam sim: %.1f%%\n", (contSimF/total) * 100);
  printf("Porcentagem de pessoas do sexo masculino que responderam não: %.1f%%\n", (contNaoM / total) * 100);

}