#define EMPTY ' '
#define BLACK 'B'
#define WHITE 'W'

char initBoard(char board[8][8])
{
    for (int i=0; i<8; i++)
        for (int j=0; j<8; j++)
            board[i][j] = EMPTY;
   board[3][3]=WHITE;
   board[4][3]=BLACK;
   board[3][4]=BLACK;
   board[4][4]=WHITE;
}
