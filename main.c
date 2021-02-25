#include <stdio.h>
#include <stdlib.h>

int main(){
    int joueur=1;
    int x;
    int b;
    char board[8][8];
    int l, c;
    printf("\t\t\t\t\t       ________________    \n");
    printf("\t\t\t\t\t      |                |   \n");
    printf("\t\t\t\t\t      |  OTHELLO GAME  |   \n");
    printf("\t\t\t\t\t      |________________|   \n");
    printf(" \t\t\t\t\                           \n");
    Sleep(1000);
    printf("\t\t\t\t\t --------------------------\n");
    printf("\t\t\t\t\t\t  1- Play       \n");
    printf("\t\t\t\t\t --------------------------\n");
    Sleep(1000);
    printf("\t\t\t\t\t\t  2- Game rules \n");
    printf("\t\t\t\t\t --------------------------\n");
    Sleep(1000);
    printf("\t\t\t\t\t\t  3- Exit       \n");
    printf("\t\t\t\t\t --------------------------\n");
    system("color F0");
    scanf("%d",&x);

    if (x==1){
        printf("\t===> choose against who you wanna play\n\t1-\tmen\n\t2-\tcomputer\n");
         Sleep(500);
        printf("\t===> choose your opponent:\n");
         Sleep(500);
        scanf("%d",&b);
        if (b==1){
            printf("\t  enjoy your time\n");
        printf("\t===================\n");
         Sleep(1000);
        initBoard(board);
        while (!(game_over(board))) {
                poss_moves(board,joueur);
                mk_moves(board);

                choice(board, &l, &c, joueur);
                Play(board, l, c, joueur);

                if (can_play(board, next_player(joueur)))
                    joueur = next_player (joueur);
                else printf ("\nplayer passes his turn\n", next_player(joueur));
                }
        }
        else{manvsmachine(board);
        }
    }
    else if (x==2) printf("\t check Google for the rules :^) ") ;
    else printf("see you soon!");


    return 0;
}
