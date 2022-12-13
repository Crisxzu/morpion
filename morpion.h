#ifndef DEF_MORPION
#define DEF_MORPION

#define NBMAX_LIGNE 15
#define NBMAX_CASE 15
#define MATCHFORVICTORY 3
#define ENTER 10
#define TRUE 1
#define FALSE 0

void initInterface();

void display(char (*grille)[NBMAX_CASE], const int highlight_x, const int highlight_y, char** player, const int turn);

void intgrille(char (*grille)[NBMAX_CASE]);

void waitinputgrille(int *highlight_x, int *highlight_y, int *input, int *turn, char (*grille)[NBMAX_CASE]);

void checkvictory(char (*grille)[NBMAX_CASE], int *success);

void displayMenu(char** ChampMenu, const int highlight_index, const int nb_ChampMenu, const int turn);

void waitinputMenu(int *highlight_index, int *input, const int nb_ChampMenu);

#endif

