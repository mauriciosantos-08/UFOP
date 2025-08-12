/*
Entrada: 
valor do sal´ario fixo e para cada comerci´ario
n´umero de sua inscri¸c˜ao
n´umero de televisores LCD
n´umero de televisores LED vendidos

Processamento:
salario = fixo + comissões - inss
inss = 8%
comissões dependem da quantidade de tv's vendidas
desconto ou não de imposto de renda 5%

Saida:
salario bruto de cada funcionario
salario liquido de cada funcionario
*/

#include <stdio.h>

int main() {
  float salBruto[35], salLiquido[35];
  int lcdVendidos[35], ledVendidos[35], inscricao[35];

  for (int i=0; i<35; i++) {
    //recebendo dados de cada funcionario
    printf("%d)\nNúmero da inscrição: ", i+1);
    scanf("%d", &inscricao[i]);
    printf("Salário Bruto: R$");
    scanf("%f", &salBruto[i]);
    printf("Número de televisores LCD vendidos: ");
    scanf("%d", &lcdVendidos[i]);
    printf("Número de televisores LED vendidos: ");
    scanf("%d", &ledVendidos[i]);

    salLiquido[i] = salBruto[i]*0.92;

    if (lcdVendidos[i] >= 10)
      salLiquido[i] += 50 * lcdVendidos[i];
    else
      salLiquido[i] += 40 * lcdVendidos[i];

    if (ledVendidos[i] >= 20)
      salLiquido[i] += 30 * ledVendidos[i];
    else
      salLiquido[i] += 15 * ledVendidos[i];

    if (salLiquido[i] >= 1315.0)
      salLiquido[i] *= 0.95;
  }

  for (int i=0; i<35; i++) {
    printf("\n%dº Salário\n", i+1);
    printf("Inscrição: %d\n", inscricao[i]);
    printf("Bruto: R$%.2f\n", salBruto[i]);
    printf("Liquido: R$%.2f\n", salLiquido[i]);
  }

  return 0;
}