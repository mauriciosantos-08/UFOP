/*Crie uma fun¸c˜ao em C que recebe um n´umero real como parˆametro (entre outros) e retorna sua parte inteira em uma vari´avel e sua parte decimal em outra. Utilize passagem por referˆencia.*/

#include <stdio.h>

void divideNum(float, int *, int *);

int main() {
  float num;
  int parteInteira, parteDecimal;
  
  //recebendo valor
  printf("\nDigite um número: ");
  scanf("%f", &num);
  
  //chamando função
  divideNum(num, &parteInteira, &parteDecimal);
  
  //imprimindo resultado
  printf("\nParte inteira: %d\nParte decimal: %d\n", parteInteira, parteDecimal);
}


void divideNum(float num, int *pInteira, int *pDecimal) {
  *pInteira = (int) num;
  if(num<0)
    *pDecimal = (int)((num - *pInteira) * -1000);  // três casas decimais
  else
    *pDecimal = (int)((num - *pInteira) * 1000);  // três casas decimais
}
