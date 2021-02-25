int c,x;
void choice(char board[8][8], int *lig, int *col, int joueur) {
    printf ("%d make your move :\n",joueur);
    printf("column:");
    scanf ("%d", &c);
    printf("line:");
    scanf ("\n%d", &x);
    (*col) = c;
    (*lig)= x;

    while (!IsValid(board,*lig, *col, joueur)) {
        printf ("unvalid move\n");
        printf ("%d make your move :\n",joueur);
        printf("column:");
        scanf ("%d", &c);
        printf("line:");
        scanf ("\n%d", &x);
        (*col) = c;
        (*lig)=x;
}
}
