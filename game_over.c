#define EMPTY ' '
#define BLACK 'B'
#define WHITE 'W'
int game_over (char board[8][8]) {
    int i, j, count_Black=0,count_White=0;
    for (i=0; i<8; i++) {
        for (j=0; j<8; j++) {
            if (board[i][j]==EMPTY && (can_play(board, 1) || can_play(board, 2))) { return 0;}
            else {
                if (board[i][j]==BLACK) count_Black++;
                else if (board[i][j]==WHITE) count_White++;
            }
        }
    }
    Display (board);
    if (count_Black> count_White)
        printf ("\nLe joueur 1 a gagne !!!\n");
    else if (count_White > count_Black)
        printf ("\nLe joueur 2 a gagne !!!\n");
    else printf ("\nLes deux joueurs sont a egalite\n");
    printf("noir=%d\nblanc=%d",count_Black,count_White);

    printf ("\n");
    return 1;
}
