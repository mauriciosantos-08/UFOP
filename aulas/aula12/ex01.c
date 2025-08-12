/*Crie um programa que verifica se a palavra UFOP (com letras maiúsculas) foi passada por argumento na linha de comando. Se sim, o programa deve imprimir: "Bem vindo à Ouro Preto!. Caso contrário, nada deve ser imprimido pelo programa"*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
  if (argc > 1)
    if (!strcmp(argv[1], "UFOP"))
      printf("Bem vindo à Ouro Preto!\n");

  return 0;
}