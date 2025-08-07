#ifndef UTILS_H
#define UTILS_H

#define TAB_HOR "━━━"
#define TAB_VER "┃"
#define TAB_TL  "┏"
#define TAB_ML  "┣"
#define TAB_BL  "┗"
#define TAB_TJ  "┳"
#define TAB_MJ  "╋"
#define TAB_BJ  "┻"
#define TAB_TR  "┓"
#define TAB_MR  "┫"
#define TAB_BR  "┛"

typedef struct {
  char name[100];
  int score;
  int undo;
  int change;
  int tabSize;
  int tab[6][6];
}Player;


void menu();
void cadastro();
void retiraN(char *string);
void printTable(int size, int tab[6][6]);
void printMoves();
void sort(int size, int tab[6][6]);
void move(char *op);
void help();
void newGame();
void loadGame();
void saveGame();
void showRanking();
void continueCurrentGame();
void exitGame();
void limpa_buffer();
void limpa_terminal();

#endif