void Display(char board[8][8]){
    printf("   | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
    for(int i=0;i<8;i++){
    printf("---+---+---+---+---+---+---+---+---+\n");
    printf(" %d |",i);
    for(int j=0;j<8;j++){
            printf(" %c |",board[i][j]);
    }
    printf("\n");
    }
    printf("---+---+---+---+---+---+---+---+---+\n");
    printf("\n");

    }
