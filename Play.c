#define BLACK 'B'
#define WHITE 'W'
void Play(char board[8][8], int lig, int col, int joueur) {
    int i, j;
    char cj, ca;

    if (joueur == 1) {
        cj = BLACK;
        ca = WHITE;
    } else {
        cj = WHITE;
        ca = BLACK;
    }
    board[lig][col] = cj;
    /* Vertical vers le haut */
    i = lig - 1;
    while (InBoard(i, col) && board[i][col] == ca) i--;
    if (InBoard(i, col) && board[i][col] == cj) {
        i = lig - 1;
        while (board[i][col] == ca) {
            board[i][col] = cj;
            i--;
        }
    }
    /* Vertical vers le bas */
    i = lig + 1;
    while (InBoard(i, col) && board[i][col] == ca) i++;
    if (InBoard(i, col) && board[i][col] == cj) {
        i = lig + 1;
        while (board[i][col] == ca) {
            board[i][col] = cj;
            i++;
        }
    }
    /* Horizontal vers la gauche */
    j = col - 1;
    while (InBoard(lig, j) && board[lig][j] == ca) j--;
    if (InBoard(lig, j) && board[lig][j] == cj) {
        j = col - 1;
        while (board[lig][j] == ca) {
            board[lig][j] = cj;
            j--;
        }
    }
    /* Horizontal vers la droite */
    j = col + 1;
    while (InBoard(lig, j) && board[lig][j] == ca) j++;
    if (InBoard(lig, j) && board[lig][j] == cj) {
        j = col + 1;
        while (board[lig][j] == ca) {
            board[lig][j] = cj;
            j++;
        }
    }
    /* Diagonal \ vers le haut */
    i = lig - 1;
    j = col - 1;
    while (InBoard(i, j) && board[i][j] == ca) {
        i--;
        j--;
    }
    if (InBoard(i, j) && board[i][j] == cj) {
        i = lig - 1;
        j = col - 1;
        while (board[i][j] == ca) {
            board[i][j] = cj;
            i--;
            j--;
        }
    }
    /* Diagonal \ vers le bas */
    i = lig + 1;
    j = col + 1;
    while (InBoard(i, j) && board[i][j] == ca) {
        i++;
        j++;
    }
    if (InBoard(i, j) && board[i][j] == cj) {
        i = lig + 1;
        j = col + 1;
        while (board[i][j] == ca) {
            board[i][j] = cj;
            i++;
            j++;
        }
    }
    /* Diagonal / vers le haut */
    i = lig - 1;
    j = col + 1;
    while (InBoard(i, j) && board[i][j] == ca) {
        i--;
        j++;
    }
    if (InBoard(i, j) && board[i][j] == cj) {
        i = lig - 1;
        j = col + 1;
        while (board[i][j] == ca) {
            board[i][j] = cj;
            i--;
            j++;
        }
    }
    /* Diagonal \ vers le bas */
    i = lig + 1;
    j = col - 1;
    while (InBoard(i, j) && board[i][j] == ca) {
        i++;
        j--;
    }
    if (InBoard(i, j) && board[i][j] == cj) {
        i = lig + 1;
        j = col - 1;
        while (board[i][j] == ca) {
            board[i][j] = cj;
            i++;
            j--;
        }
    }
}
