#include <stdio.h>
#include <stdlib.h>

/*********************************************************************************/
#define BLACK 'B'
#define WHITE 'W'
int InBoard(int l,int c) {
    return ((c >= 0) && (c < 8) && (l>= 0) && (l< 8));

}
int board[8][8];

int IsValid(char board[8][8],int lig,int col,int joueur) {
    int i, j, ok;
    char cj, ca;

    if (joueur == 1) {
        cj = BLACK;
        ca = WHITE;
    }
    else {
        cj = WHITE;
        ca = BLACK;
    }
    if (!InBoard(lig, col) || board[lig][col] != ' ') return 0;

    /* Vertical vers le haut */
    i = lig - 1;
    ok = 0;
    while (InBoard(i, col) && board[i][col] == ca) {
        i--;
        ok = 1;
    }
    if (InBoard(i, col) && board[i][col] == cj && ok == 1) return 1;

    /* Vertical vers le bas */
    i = lig + 1;
    ok = 0;
    while (InBoard(i, col) && board[i][col] == ca) {
        i++;
        ok = 1;
    }
    if (InBoard(i, col) && board[i][col] == cj && ok == 1) return 1;

    /* Horizontal vers la gauche */
    j = col - 1;
    ok = 0;
    while (InBoard(lig, j) && board[lig][j] == ca) {
        j--;
        ok = 1;
    }
    if (InBoard(lig, j) && board[lig][j] == cj && ok == 1) return 1;

    /* Horizontal vers la droite */
    j = col + 1;
    ok = 0;
    while (InBoard(lig, j) && board[lig][j] == ca) {
        j++;
        ok = 1;
    }
    if (InBoard(lig, j) && board[lig][j] == cj && ok == 1) return 1;

    /* Diagonal \ vers le haut */
    i = lig - 1;
    j = col - 1;
    ok = 0;
    while (InBoard(i, j) && board[i][j] == ca) {
        i--;
        j--;
        ok = 1;
    }
    if (InBoard(i, j) && board[i][j] == cj && ok == 1) return 1;

    /* Diagonal \ vers le bas */
    i = lig + 1;
    j = col + 1;
    ok = 0;
    while (InBoard(i, j) && board[i][j] == ca) {
        i++;
        j++;
        ok = 1;
    }
    if (InBoard(i, j) && board[i][j] == cj && ok == 1) return 1;

    /* Diagonal / vers le haut */
    i = lig - 1;
    j = col + 1;
    ok = 0;
    while (InBoard(i, j) && board[i][j] == ca) {
        i--;
        j++;
        ok = 1;
    }
    if (InBoard(i, j) && board[i][j] == cj && ok == 1) return 1;

    /* Diagonal / vers le bas */
    i = lig + 1;
    j = col - 1;
    ok = 0;
    while (InBoard(i, j) && board[i][j] == ca) {
        i++;
        j--;
        ok = 1;
    }
    if (InBoard(i, j) && board[i][j] == cj && ok == 1) return 1;

    return 0;
}
