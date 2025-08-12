/*Crie um procedimento que recebe um ano (no formato aaaa, indicado por um n´umero inteiro) como
parˆametro e imprima o dia e mˆes em que ocorrem os feriados da p´ascoa, sexta-feira santa, ter¸ca-feira
de carnaval e Corpus Christi.*/

#include <stdio.h>
#include <math.h>

//prototipo das funções
int calcPascoa(int ano);

//main
int main() {
  int ano, mesPascoa, mesCarnaval, mesCorpus, diaPascoa, diaSexta, diaCarnaval, diaCorpus;
  int aux;

  printf("Digite o ano: ");
  scanf("%d", &ano);

  //calculando datas
  aux = calcPascoa(ano);

  mesPascoa = aux / 31;
  diaPascoa = aux % 31 + 1;
  diaSexta = diaPascoa - 2;
  
  diaCarnaval = (aux - 47) % 31 +1;
  mesCarnaval = (aux - 47) / 31;

  diaCorpus = (aux + 61) % 31 +1;
  mesCorpus = (aux + 61) / 31;

  //imprimindo feriados
  printf("\n---FERIADOS---\n");
  printf("Páscoa: %d/%d\n", diaPascoa, mesPascoa);
  printf("Sexta-feira santa: %d/%d\n", diaSexta, mesPascoa);
  printf("Terça-feira de carnaval: %d/%d\n", diaCarnaval, mesCarnaval);
  printf("Corpus Christi: %d/%d\n\n", diaCorpus, mesCorpus);

  return 0;
}

//função para calcular data da pascoa
int calcPascoa(int ano) {
  int a = ano % 19;
  int b = ano / 100;
  int c = ano % 100;
  int d = b / 4;
  int e = b % 4;
  int f = (b + 8) / 25;
  int g = (b - f + 1) / 3;
  int h = (19 * a + b - d - g + 15) % 30;
  int i = c / 4;
  int k = c % 4;
  int l = (32 + 2 * e + 2 * i - h - k) % 7;
  int m = (a + 11 * h + 22 * l) / 451;
  
  int res = (h + l - 7 * m + 114);
  return res;
}
