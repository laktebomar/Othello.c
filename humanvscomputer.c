void choice_machine(char board[8][8],int *l,int *c,int player)
{
	 for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            if (IsValid(board,i , j, player)){
        	*l = i;
            *c = j;break;}
        }
    }
}
void manvsmachine(char board[8][8]){
            int lig, col, player = 1;
            initBoard(board);

            while (!game_over (board)) {
                 if(player==1){
                 poss_moves(board, player);
                 mk_moves(board);

                 choice(board, &lig, &col,player);
                 Play (board, lig, col, player);}
                 else{
                      choice_machine (board,&lig,&col,player);
                      Play (board, lig, col, player);
                      }
                      Display(board);
                 if (can_play(board, next_player(player)))
                    player = next_player (player);
                 else printf ("\n%d passes his turn \n", next_player(player));}
                 }
