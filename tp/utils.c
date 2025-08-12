#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "utils.h"  

void game() {
  //declaração de variáveis
  Player players[100]; //vetor de jogadores
  int playersGamed = 0; //contador de jogos já realizados (receber esse valor do contador do arquivo)
  char op, moveOp[10];

  do {
    //rodando menu
    printMenu();
    menu(players, &playersGamed, &op);
    
    if (op == 'A')
      game();
    //rodando jogo
    do {
      //printando tabela
      limpa_terminal();
      printTable(players[playersGamed].size, players[playersGamed].tab);

      //escolhendo prox movimento
      printMoves();
      moveChoose(moveOp);

      if( !(strcmp(moveOp, "VOLTAR")) )
        break;
      else {
        switch (moveOp[0]) {
        case 'W':
          moveUp(players[playersGamed].tab, players[playersGamed].size);
          addBlock(players[playersGamed].tab, players[playersGamed].size);
          break;
          
        case 'A':
          moveLeft(players[playersGamed].tab, players[playersGamed].size);
          addBlock(players[playersGamed].tab, players[playersGamed].size);
          break;
          
        case 'S':
          moveDown(players[playersGamed].tab, players[playersGamed].size);
          addBlock(players[playersGamed].tab, players[playersGamed].size);
          break;
          
        case 'D':
          moveRight(players[playersGamed].tab, players[playersGamed].size);
          addBlock(players[playersGamed].tab, players[playersGamed].size);
          break;
        
        default:
          printf("Movimento inválido! Tente novamente...\n");
        }
      }
    } while (strcmp(moveOp, "VOLTAR"));
    
    //voltando para o menu...

    //liberando espaço alocado
    matFree(players[playersGamed].tab, players[playersGamed].size);
  } while(op != 'R');
}

//printa o menu na tela
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

//recebe a opção escolhida pelo usuário
void opChoose(char *op) {
  printf("Digite sua escolha: ");
  *op = toupper(getchar());
  limpa_buffer();
}

//seleciona qual função do jogo será utilizada
void menu(Player *players, int *playersGamed, char *op) {
  opChoose(op);

  switch(*op) {
    case 'R':
      exitGame(); 
      return;
    
    case 'N':
      newGame(players, playersGamed);
      break;
    
    //case 'J': continueCurrentGame(); break;
    //case 'C': loadGame(); break;
    //case 'S': saveGame(); *playersGamed++; break;
    //case 'M': showRanking(); break;

    case 'A': 
      help();
      break;

    default:
      printf("\nOpção inválida! Escolha novamente...\n");
  }
}

//printa o texto de ajuda na tela
void help() {
  printf("\nCOMO JOGAR 2048\n");

  printf("\nO JOGO:\nO 2048 clássico é jogado em um tabuleiro de 4x4, com peças numéricas que deslizam suavemente quando o jogador as move em um dos quatro sentidos disponíveis: para cima, para baixo, à esquerda e à direita. A cada movimento, um novo número aparece aleatoriamente em um local vazio no tabuleiro (com um valor de 2 ou 4). As peças (blocos) deslizam o mais longe possível na direção escolhida até que eles sejam interrompidos por qualquer outro bloco ou a borda do tabuleiro. Se duas peças do mesmo número colidem durante a movimentação, elas irão se fundir e a posição terá o valor total das duas peças que colidiram. A peça resultante não pode se fundir com outra peça novamente na mesma jogada. Blocos com pontuação maior possuem cores diferentes.\n");

  printf("\nREGRAS:\n1. O jogo começa com duas posições aleatórias do tabuleiro preenchidas.\n2. A cada jogada, o jogador deve escolher uma direção (para cima, para baixo, para a esquerda ou para a direita).\n3. Todas as peças se movem o máximo possível nessa direção, algumas se movem mais do que outras. Duas peças adjacentes (somente nessa direção) com números iguais se combinam em uma contendo a soma desses números.\n4. Um movimento é válido quando pelo menos uma peça pode ser movida, inclusive por combinação.\n5. Uma nova peça é gerada ao final de cada jogada em uma posição vazia escolhida aleatoriamente (se houver)\n6. Na maioria das vezes, um novo 2 deve ser adicionado, mas ocasionalmente, um 4.\n7. Para vencer, o jogador deve criar uma peça com o número 2048.\n8. O jogador perde se não houver movimentos válidos possíveis.\n");
}

//criação de um novo jogo
void newGame(Player *players, int *playersGamed) {
  int s;
  limpa_terminal();
  printf("NOVO JOGO\n");

  //escolhendo tamanho do tabuleiro
  s = sizeChoose();
  players[*playersGamed].size = s;

  //alocação do tabuleiro
  players[*playersGamed].tab = matMalloc(s);
  
  //inicializa tabuleiro com 0
  matIniciate(players[*playersGamed].tab, s);  

  //cadastra jogador
  playerRegister(players, playersGamed);
  
  //gera dois blocos aleatórios
  addBlock(players[*playersGamed].tab, players[*playersGamed].size);
  addBlock(players[*playersGamed].tab, players[*playersGamed].size);
}

void playerRegister(Player *players, int *playersGamed) {
  printf("Digite seu nome: ");
  fgets(players[*playersGamed].name, 79, stdin);
  retiraN(players[*playersGamed].name);
}

//escolha do tamanho do tabuleiro
int sizeChoose() {
  int op;

  do {
    printf("\n(4) jogo padrão 4x4\n(5) Jogo 5x5\n(6) Jogo 6x6.\nEscolha sua opção: ");
    scanf("%d", &op);
    if (op!=6 && op!= 5 && op!=4)
      printf("Opção inválida! Escolha nomavente...\n");
  } while (op!=6 && op!= 5 && op!=4);
  
  limpa_buffer();

  return op;
}

//printa na tela os movimentos possíveis
void printMoves() {
  printf("\n(a) Mover para esquerda\n(d) Mover para direita\n(s) Mover para baixo\n(w) Mover para cima\n(voltar) Voltar para o menu\n");
}

//confirma saída do jogador
void exitGame() {
  char aux[10];
  
  while (1) {
    printf("Deseja realmente sair do jogo (sim/não)? ");
    fgets(aux, 10, stdin);
    retiraN(aux);
    
    if (strcmp(aux, "sim") == 0 || strcmp(aux, "SIM") == 0) {
      printf("Saindo do jogo...\n");
      exit(0);
    } 
    else if (strcmp(aux, "não") == 0 || strcmp(aux, "NÃO") == 0) {
      printf("Voltando ao menu principal...\n");
      //menu();
    } else {
      printf("Resposta inválida. Por favor, digite 'sim' ou 'não'.\n");
    }
  }
}

//retira o \n da string
void retiraN(char *string) {
  int tam = strlen(string);
  if (tam > 0 && string[tam - 1] == '\n')
    string[tam - 1] = '\0';
}

//limpa o terminal
void limpa_terminal() {
  system("clear");
}

//limpa o buffer
void limpa_buffer() {
  int ch;
  while ((ch = getchar()) != '\n' && ch != EOF); 
}

//alocação de matrizes inteiras
int **matMalloc(int size) {
  int **mat = malloc(size * sizeof(int *));

  for (int i = 0; i < size; i++) {
    mat[i] = malloc(size * sizeof(int));
  }
  
  return mat;
}

//inicializa matriz de inteiros com 0
void matIniciate(int **mat, int size) {
  for (int i = 0; i < size; i++)
    for (int j = 0; j < size; j++)
      mat[i][j] = 0;
}

//libera a memória alocada pela matriz
void matFree(int **mat, int size) {
  for (int i = 0; i < size; i++)
    free(mat[i]);
  free(mat);
}

//printa o tabuleiro atual do jogador
void printTable(int size, int **tab) {
  //printando coordenadas horizontais
  printf("   ");
  for (int i=1; i<=size; i++) {
    printf("%3d  ", i);
  }

  //printando primeira linha
  printf("\n  " TAB_TL);
  for (int i=0; i<size-1; i++)
    printf(TAB_HOR TAB_TJ);
  printf(TAB_HOR TAB_TR "\n");

  //printando meio
  for (int i=0; i<size; i++) {
    for (int j=0; j<size; j++) {
      
      if (j==0)
        printf("%c ", 'A'+i);
      
      printf(TAB_VER);
      if (tab[i][j] == 0)
        printf("    ");
      else
        printf("%4d", tab[i][j]);
    }
    printf(TAB_VER);

    //verificando se ultima linha e printando
    if (i < size-1) {
      printf("\n  " TAB_ML);
      for (int j=0; j<size - 1; j++)
        printf(TAB_HOR TAB_MJ);
      printf(TAB_HOR TAB_MR "\n");
    } else {
      printf("\n  " TAB_BL);
      for (int j=0; j<size-1; j++)
        printf(TAB_HOR TAB_BJ);
      printf(TAB_HOR TAB_BR "\n");
    }
  }
}

void moveChoose(char moveOp[10]) {
  printf("Escolha seu movimento: ");
  fgets(moveOp, 9, stdin);
  retiraN(moveOp);
  
  int i=0;
  do {
    if (moveOp[i]>='a' && moveOp[i]<='z')
      moveOp[i] = toupper(moveOp[i]);
    i++;
  } while(moveOp[i] != '\0');
}

void addBlock(int **tab, int size) {
  int p1, p2, n, res;
  
  do {
    p1 = rand() % size;
    p2 = rand() % size;
  } while (tab[p1][p2] != 0); //evita sobreposição de valores

  if (size == 4) {
    res = rand() % 10;
    if (res<9) n = 2; //90% de chance
    else n = 4; //10% de chance
  }

  if (size == 5) {
    res = rand() % 100;
    if (res<85) n = 2; //75% de chance
    else n = 4; //25% de chance
  }

  if (size == 6) {
    res = rand() % 10;
    if (res<8) n = 2; //80% de chance
    else n = 4; //20% de chance
  }

  tab[p1][p2] = n;
}

// Move todos os números para cima
void moveUp(int **tab, int size) {
  for (int j = 0; j < size; j++) {
    // Compacta os valores (desloca para baixo deconsiderando os zeros)
    int target = 0;
    for (int i = 0; i < size; i++) {
      if (tab[i][j] != 0) {
        if (target != i) {
          tab[target][j] = tab[i][j];
          tab[i][j] = 0;
        }
        target++;
      }
    }
    
    // Soma valores iguais
    for (int i = 0; i < size-1; i++) {
      if (tab[i][j] != 0 && tab[i][j] == tab[i + 1][j]) {
        tab[i][j] *= 2;
        tab[i + 1][j] = 0;
      }
    }
    
    // Compacta novamente os valores
    target = 0;
    for (int i = 0; i < size; i++) {
      if (tab[i][j] != 0) {
        if (target != i) {
          tab[target][j] = tab[i][j];
          tab[i][j] = 0;
        }
        target++;
      }
    }
  }
}

// Move todos os números para baixo
void moveDown(int **tab, int size) {
  for (int j = 0; j < size; j++) {
    // Compacta os valores (desloca para baixo deconsiderando os zeros)
    int target = size-1;
    for (int i = size-1; i >= 0; i--) {
      if (tab[i][j] != 0) {
        if (target != i) {
          tab[target][j] = tab[i][j];
          tab[i][j] = 0;
        }
        target--;
      }
    }
    
    // Soma valores iguais
    for (int i = size-1; i > 0; i--) {
      if (tab[i][j] != 0 && tab[i][j] == tab[i-1][j]) {
        tab[i][j] *= 2;
        tab[i-1][j] = 0;
      }
    }

    // Compacta novamente
    target = size-1;
    for (int i = size-1; i >= 0; i--) {
      if (tab[i][j] != 0) {
        if (target != i) {
          tab[target][j] = tab[i][j];
          tab[i][j] = 0;
        }
        target--;
      }
    }
  }
}

// Move todos os números para a esquerda
void moveLeft(int **tab, int size) {
  for (int i = 0; i < size; i++) {
    // Compacta os valores (desloca para baixo deconsiderando os zeros)
    int target = 0;
    for (int j = 0; j < size; j++) {
      if (tab[i][j] != 0) {
        if (target != j) {
          tab[i][target] = tab[i][j];
          tab[i][j] = 0;
        }
        target++;
      }
    }
    
    // Soma valores iguais
    for (int j = 0; j < size-1; j++) {
      if (tab[i][j] != 0 && tab[i][j] == tab[i][j+1]) {
        tab[i][j] *= 2;
        tab[i][j+1] = 0;
      }
    }

    // Compacta novamente
    target = 0;
    for (int j = 0; j < size; j++) {
      if (tab[i][j] != 0) {
        if (target != j) {
          tab[i][target] = tab[i][j];
          tab[i][j] = 0;
        }
        target++;
      }
    }
  }
}

// Move todos os números para a direita
void moveRight(int **tab, int size) {
  for (int i = 0; i<size; i++) {
    // Compacta os valores (desloca para baixo deconsiderando os zeros)
    int target = size-1;
    for (int j = size-1; j>=0; j--) {
      if (tab[i][j] != 0) {
        if (target != j) {
          tab[i][target] = tab[i][j];
          tab[i][j] = 0;
        }
        target--;
      }
    }

    // Soma valores iguais
    for (int j = size-1; j>0; j--) {
      if (tab[i][j] != 0 && tab[i][j] == tab[i][j-1]) {
        tab[i][j] *= 2;
        tab[i][j-1] = 0;
      }
    }
    
    // Compacta novamente
    target = size-1;
    for (int j = size-1; j>=0; j--) {
      if (tab[i][j] != 0) {
        if (target != j) {
          tab[i][target] = tab[i][j];
          tab[i][j] = 0;
        }
        target--;
      }
    }
  }
}