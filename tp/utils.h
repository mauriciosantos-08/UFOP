#ifndef UTILS_
#define UTILS_H

// cores e formato de texto
#define ANSI_RESET            "\x1b[0m"  // desativa os efeitos anteriores
#define ANSI_BOLD             "\x1b[1m"  // coloca o texto em negrito
#define ANSI_COLOR_BLACK      "\x1b[30m"
#define ANSI_COLOR_RED        "\x1b[31m"
#define ANSI_COLOR_GREEN      "\x1b[32m"
#define ANSI_COLOR_YELLOW     "\x1b[33m"
#define ANSI_COLOR_BLUE       "\x1b[34m"
#define ANSI_COLOR_MAGENTA    "\x1b[35m"
#define ANSI_COLOR_CYAN       "\x1b[36m"
#define ANSI_COLOR_WHITE      "\x1b[37m"
#define ANSI_BG_COLOR_BLACK   "\x1b[40m"
#define ANSI_BG_COLOR_RED     "\x1b[41m"
#define ANSI_BG_COLOR_GREEN   "\x1b[42m"
#define ANSI_BG_COLOR_YELLOW  "\x1b[43m"
#define ANSI_BG_COLOR_BLUE    "\x1b[44m"
#define ANSI_BG_COLOR_MAGENTA "\x1b[45m"
#define ANSI_BG_COLOR_CYAN    "\x1b[46m"
#define ANSI_BG_COLOR_WHITE   "\x1b[47m"

// macros para facilitar o uso
#define BOLD(string)       ANSI_BOLD             string ANSI_RESET
#define BLACK(string)      ANSI_COLOR_BLACK      string ANSI_RESET
#define BLUE(string)       ANSI_COLOR_BLUE       string ANSI_RESET
#define RED(string)        ANSI_COLOR_RED        string ANSI_RESET
#define GREEN(string)      ANSI_COLOR_GREEN      string ANSI_RESET
#define YELLOW(string)     ANSI_COLOR_YELLOW     string ANSI_RESET
#define BLUE(string)       ANSI_COLOR_BLUE       string ANSI_RESET
#define MAGENTA(string)    ANSI_COLOR_MAGENTA    string ANSI_RESET
#define CYAN(string)       ANSI_COLOR_CYAN       string ANSI_RESET
#define WHITE(string)      ANSI_COLOR_WHITE      string ANSI_RESET
#define BG_BLACK(string)   ANSI_BG_COLOR_BLACK   string ANSI_RESET
#define BG_BLUE(string)    ANSI_BG_COLOR_BLUE    string ANSI_RESET
#define BG_RED(string)     ANSI_BG_COLOR_RED     string ANSI_RESET
#define BG_GREEN(string)   ANSI_BG_COLOR_GREEN   string ANSI_RESET
#define BG_YELLOW(string)  ANSI_BG_COLOR_YELLOW  string ANSI_RESET
#define BG_BLUE(string)    ANSI_BG_COLOR_BLUE    string ANSI_RESET
#define BG_MAGENTA(string) ANSI_BG_COLOR_MAGENTA string ANSI_RESET
#define BG_CYAN(string)    ANSI_BG_COLOR_CYAN    string ANSI_RESET
#define BG_WHITE(string)   ANSI_BG_COLOR_WHITE   string ANSI_RESET

//defines para printar tabuleiro
#define TAB_HOR "━━━━"
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

//struct para armazenar dados dos jogadores
typedef struct {
  char name[80];
  int score;
  int undo;
  int change;
  int size;
  int **tab;
} Player;

//protótipos das funções
void menu(Player *players, int *playersGamed, char *op);
void printMenu();
void opChoose(char *op);
int sizeChoose();
void game();
void help();
void newGame(Player *players, int *playersGamed);
void playerRegister(Player *players, int *playersGamed);
void printMoves();
void exitGame();
void retiraN(char *string);
void limpa_buffer();
void limpa_terminal();
int **matMalloc(int size);
void matIniciate(int **mat, int size);
void matFree(int **mat, int size);
void printTable(int size, int **tab);
void moveChoose(char moveOp[10]);
void move(char moveOp[10]);
void addBlock(int **tab, int size);
void moveUp(int **tab, int size);
void moveLeft(int **tab, int size);
void moveDown(int **tab, int size);
void moveRight(int **tab, int size);

#endif