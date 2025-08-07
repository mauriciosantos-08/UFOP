#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "utils.h"

void printMenu() {
  printf("\n---------- MENU ----------");
  printf("\n(R) Sair");
  printf("\n(N) Novo Jogo");
  printf("\n(J) Continuar Jogo Atual");
  printf("\n(C) Carregar Jogo Salvo");
  printf("\n(S) Salvar Jogo Atual");
  printf("\n(M) Mostrar Ranking");
  printf("\n(A) Ajuda com as Instruções de Como Jogar");
  printf("\n");
}

void menu() {
  char op;
  Player players[50];
  int i=0;

  while (1) {
    printMenu();
    printf("\nEscolha sua opção: ");
    op = toupper(getchar(op));
    limpa_buffer();

    switch (op[0]) {
      case 'R': exitGame(); return;
      case 'N': newGame(); break;
      case 'J': continueCurrentGame(); break;
      case 'C': loadGame(); break;
      case 'S': saveGame(); break;
      case 'M': showRanking(); break;
      case 'A': help(); break;
      default: printf("\nOpção inválida! Escolha novamente...\n");
    }
  }
}

void help() {
  printf("\nCOMO JOGAR 2048\n");

  printf("\nO JOGO:\nO 2048 clássico é jogado em um tabuleiro de 4x4, com peças numéricas que deslizam suavemente quando o jogador as move em um dos quatro sentidos disponíveis: para cima, para baixo, à esquerda e à direita. A cada movimento, um novo número aparece aleatoriamente em um local vazio no tabuleiro (com um valor de 2 ou 4). As peças (blocos) deslizam o mais longe possível na direção escolhida até que eles sejam interrompidos por qualquer outro bloco ou a borda do tabuleiro. Se duas peças do mesmo número colidem durante a movimentação, elas irão se fundir e a posição terá o valor total das duas peças que colidiram. A peça resultante não pode se fundir com outra peça novamente na mesma jogada. Blocos com pontuação maior possuem cores diferentes.\n");

  printf("\nREGRAS:\n1. O jogo começa com duas posições aleatórias do tabuleiro preenchidas.\n2. A cada jogada, o jogador deve escolher uma direção (para cima, para baixo, para a esquerda ou para a direita).\n3. Todas as peças se movem o máximo possível nessa direção, algumas se movem mais do que outras. Duas peças adjacentes (somente nessa direção) com números iguais se combinam em uma contendo a soma desses números.\n4. Um movimento é válido quando pelo menos uma peça pode ser movida, inclusive por combinação.\n5. Uma nova peça é gerada ao final de cada jogada em uma posição vazia escolhida aleatoriamente (se houver)\n6. Na maioria das vezes, um novo 2 deve ser adicionado, mas ocasionalmente, um 4.\n7. Para vencer, o jogador deve criar uma peça com o número 2048.\n8. O jogador perde se não houver movimentos válidos possíveis.\n");
}

void newGame() {
  int type;
  char moveOp[10];

  cadastro();

  //escolha do tamanho
  do {
    printf("\n(4) Jogo padrão 4x4\n(5) Jogo 5x5\n(6) Jogo 6x6\nEscolha sua opção: ");
    scanf("%d", &type);
    getchar(); // limpa o '\n' do buffer
    if (type < 4 || type > 6)
      printf("Opção inválida! Tente novamente.\n");
  } while (type < 4 || type > 6);

  sort(type, tab); // adiciona 2 blocos

  do {
    //printando jogo atual
    limpa_terminal();
    printTable(type, tab);

    //recebendo prox movimento
    printMoves();
    printf("Faça sua jogada: ");
    fgets(moveOp, sizeof(moveOp), stdin);
    retiraN(moveOp);

    if (!strcmp(moveOp, "voltar"))
      break;

    move(moveOp); // ainda não implementado

  } while (1);
}

void printTable(int size, int tab[6][6]) {
  printf("%s", TAB_TL);
  for (int i=0; i<size-1; i++)
    printf("%s%s", TAB_HOR, TAB_TJ);
  printf("%s%s\n", TAB_HOR, TAB_TR);

  for (int i=0; i<size; i++) {
    for (int j=0; j<size; j++) {
      printf("%s", TAB_VER);
      if (tab[i][j] == 0)
        printf("   ");
      else
        printf("%3d", tab[i][j]);
    }
    printf("%s\n", TAB_VER);

    if (i < size-1) {
      printf("%s", TAB_ML);
      for (int j=0; j<size - 1; j++)
        printf("%s%s", TAB_HOR, TAB_MJ);
      printf("%s%s\n", TAB_HOR, TAB_MR);
    } else {
      printf("%s", TAB_BL);
      for (int j=0; j<size-1; j++)
        printf("%s%s", TAB_HOR, TAB_BJ);
      printf("%s%s\n", TAB_HOR, TAB_BR);
    }
  }
}

void sort(int size, int tab[6][6]) {
  int p1, p2, p3, p4;
  do {
    p1 = rand() % size;
    p2 = rand() % size;
    p3 = rand() % size;
    p4 = rand() % size;
  } while (p1 == p3 && p2 == p4); // evita posições iguais

  int n1 = (rand() % 4 < 3) ? 2 : 4;
  int n2 = (rand() % 4 < 3) ? 2 : 4;

  tab[p1][p2] = n1;
  tab[p3][p4] = n2;
}

void printMoves() {
  printf("\n(a) Mover para esquerda\n(d) Mover para direita\n(s) Mover para baixo\n(w) Mover para cima\n(voltar) Voltar para o menu\n");
}

void move(char *op) {
  printf("Função de movimento [%s] ainda não implementada.\n", op);
}

void cadastro() {
  Jogador jogadores[100];
  printf("Digite seu nome: ");
  fgets(jogadores[0].name, sizeof(jogadores[0].name), stdin);
  retiraN(jogadores[0].name);
}

void retiraN(char *string) {
  int tam = strlen(string);
  if (tam > 0 && string[tam - 1] == '\n')
    string[tam - 1] = '\0';
}

void exitGame() {
  char aux[3];

  printf("Deseja realmente sair do jogo (sim/não)? ");
  do {
    fgets();
  }
}

void continueCurrentGame() { printf("\nContinuar jogo - não implementado.\n"); }
void loadGame() { printf("\nCarregar jogo - não implementado.\n"); }
void saveGame() { printf("\nSalvar jogo - não implementado.\n"); }
void showRanking() { printf("\nMostrar ranking - não implementado.\n"); }

void limpa_buffer() {

}

void limpa_terminal() {
  system("clear");
}