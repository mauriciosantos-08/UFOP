/*Crie um programa com uma vari´avel inteira chamada num e dois ponteiros para int, chamados ptr e ptr2. Atribua um valor a num e fa¸ca com que ptr aponte para num. Atribua o endere¸co apontado por ptr2 a ptr, de forma que os dois apontem para o mesmo endere¸co. Altere o conte´udo apontado por cada um dos apontadores e analise o que acontece com a vari´avel num.*/

#include <stdio.h>

int main() {
  int num, *ptr = &num, **ptr2 = &ptr;

  printf("\nValor de num: ");
  scanf("%d", &num);

  *ptr = num * 2;
  printf("\nAlterando por *ptr\nnum =  %d", num);
  
  **ptr2 = *ptr * 2;
  printf("\nAlterando por *ptr2\nnum = %d\n", num);
}