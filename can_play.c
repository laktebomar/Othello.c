
int can_play (char board[8][8], int player) {
    for (int i=0; i<8; i++)
        for (int j=0; j<8; j++)
            if (IsValid(board, i, j, player)) return 1; /* Le joueur peut encore jouer */

    /* Le joueur ne peut plus jouer */
    return 0;
}
