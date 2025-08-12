/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o sal´ario e n´umero de filhos. A prefeitura deseja saber:
a. A m´edia do sal´ario da popula¸c˜ao;
b. A m´edia do n´umero de filhos;
c. O maior sal´ario;
d. O percentual de pessoas com sal´ario at´e R$1080,00.
O final da leitura de dados deve acontecer quando for digitado um sal´ario negativo.*/

#include <stdio.h>

void analisaSalario(float, float *, float *, int *);
void analisaFilhos(int, float *);

int main(int argc, char *argv []) {
  float salario, mediaSalarial = 0, maiorSalario = 0, percSalarios,  mediaFilhos = 0;
  int numFilhos, qtdPessoas = 0, qtdSalariosAte1080 = 0;
  
  do {
    //recebendo valores
    printf("%d)\nDigite seu salário: R$", qtdPessoas + 1);
    scanf("%f", &salario);
    
    if (salario > 0) {
      printf("Digite o nº de filhos: ");
      scanf("%d", &numFilhos);
      
      //analisando valores
      analisaSalario(salario, &mediaSalarial, &maiorSalario, &qtdSalariosAte1080);
      analisaFilhos(numFilhos, &mediaFilhos);
      
      qtdPessoas++;
    }else
    printf("Programa finalizado!\n");
  } while (salario>=0);
  
  
  //imprimindo resultados
  if (qtdPessoas != 0){
    mediaSalarial /= qtdPessoas;
    mediaFilhos /= qtdPessoas;
    percSalarios = qtdSalariosAte1080 * 100.0 / qtdPessoas;
    
    printf("\n---RESULTADO---\n");
    printf("Média Salarial da População: R$%.2f\n", mediaSalarial);
    printf("Média de Número de FIlhos da População: %.1f\n", mediaFilhos);
    printf("Maior Salário: R$%.2f\n", maiorSalario);
    printf("Percentual de pessoas com salário até R$1080: %.1f%%\n\n", percSalarios);
    
  }else
    printf("\nUsuário não digitou valores válidos.\n");
  
  return 0;
}

void analisaSalario(float salario, float *mediaSalarial, float *maiorSalario, int *qtdSalariosAte1080) {
  *mediaSalarial += salario;
  
  if (salario > *maiorSalario)
    *maiorSalario = salario;
  
  if (salario <= 1080.0)
    (*qtdSalariosAte1080)++;
}

void analisaFilhos(int numFilhos, float *mediaFilhos) {
  *mediaFilhos += numFilhos;
}