#include<stdio.h>
#include<stdlib.h>
void update(char board[8][8]);
int npass(char board[8][8], int m, int n, int o, int p)
{
    int avl=0;
    //for P
    
        if(m==5 && o==6 && (p == (n+1) || p==(n-1)) && board[9-o][p-1] == 'p' && board[8-o][p-1]==' ')
        {
            board[8-m][p-1] = ' ';
            avl=1;
        }
        // for p
        if(m==4 && o==3 && (p == (n+1) || p==(n-1)) && board[7 - o][p-1] == 'P' && board[8-o][p-1]== ' ')
        {
            board[8-m][p-1] = ' ';
            avl =1;
        }
    return avl;
}

void pawnpromte(char board[8][8],int o,int p){
    //for P
    int num=0;
    if(o==8){
        printf("What you want pawn to promote?\n1. Q\n2. R\n3. K\n4. B\n");
        scanf("%d",&num);

        // board[8-m][n-1] = ' ';
        if(num==1){
            board[8-o][p-1] = 'Q';
        }
        else if(num==2){
            board[8-o][p-1] = 'R';
        }
        else if(num ==3){
            board[8-o][p-1] = 'K';
        }
        else if(num==4){
            board[8-o][p-1] = 'B';
        }
       printf("\e[1;1H\e[2J");
       update(board);
    }
    // for p
    else if(o==1){

        printf("What you want pawn to promote?\n1. q\n2. r\n3. k\n4. b\n");
        scanf("%d",&num);

        // board[8-m][n-1] = ' ';
        if(num==1){
            board[8-o][p-1] = 'q';
        }
        else if(num==2){
            board[8-o][p-1] = 'r';
        }
        else if(num ==3){
            board[8-o][p-1] = 'k';
        }
        else if(num==4){
            board[8-o][p-1] = 'b';
        }
       printf("\e[1;1H\e[2J");
       update(board);
    }
}

int castling(char board[8][8], int m, int n, int o, int p){
    
    //for KING
    /*
    empty space must be checked outside of function
    */
    char temp2;
    int avl=0;
    if(board[8 - m][n-1] == 'C' && board[7][7] =='R'){// for right R
        if(m==o && m==1 && n==5 && p==7){
            
            temp2 = board[7][7]; //temp2 = R
            
            board[7][7] = ' ';    
            board[7][5] = temp2;
            avl=1;
        }
    }
     if(board[8 -m][n-1] == 'C' && board[7][0] == 'R'){// for left R
        if(m==o && m==1 && n==5 && p==3){
            
            
            temp2 = board[7][0]; //temp2 = R
            board[7][0] = ' ';
            
            
            board[7][3] = temp2;
            
            avl=1;
        }
    }
    // for king
     if(board[8 -m][n-1] == 'c' && board[0][7] == 'r'){//for right r
        if(m==o && m==8 && n==5 && p==7){
            
            temp2 = board[0][7]; //temp2 = r
            
            board[7][7] = ' ';
            board[7][5] = temp2;
            avl=1;
        }
    }
     if(board[8 -m][n-1] == 'c' && board[0][0] == 'r'){//for left r
        if(m==o && m==8 && n==5 && p==3){
            
            temp2 = board[0][0]; //temp2 = r
            
            board[0][0] = ' ';
            
            board[0][3] = temp2;
            avl=1;
        }
    }

    return avl;
}
int Pmove(char board[8][8], int m, int n, int o, int p,int num)
{
	
	int avl = 0;
	char k;
	// different func for different pieces
	if (num == 1)
	{
		avl = pAvl(board, m, n, o, p);
	}
	else if (num == 2)
	{
		avl = hAvl(board, m, n, o, p);
	}
	else if (num ==3)
	{
		avl = rAvl(board, m, n, o, p);
	}
	else if (num ==4)
	{
		avl = bAvl(board, m, n, o, p);
	}
	else if (num ==5)
	{
		avl = rAvl(board, m, n, o, p);

		if (avl <= 0)
		{
			avl = bAvl(board, m, n, o, p);
		}
	}

	return avl;
}
int stalemate(char board[8][8]){
        // i<8; j<8; k<8; l<8;
        // if check
    int i,j,k,l;
    int avl=0;

    for(i=1;i<=8;i++){
        for(j=1;j<=8;j++){
            for(k=1;k<=8;k++){
                for(l=1;l<=8;l++){
                    if(board[i][j] == 'p' || board[i][j] =='P'){
                        avl =Pmove(board,i,j,k,l,1);
                    }
                    if(board[i][j] == 'k' || board[i][j] == 'K'){
                        avl =Pmove(board,i,j,k,l,2);
                    }
                    if(board[i][j] == 'r' || board[i][j] == 'R'){
                        avl =Pmove(board,i,j,k,l,3);
                    }
                    if(board[i][j] == 'b' || board[i][j] == 'B'){
                        avl =Pmove(board,i,j,k,l,4);
                    }
                    if(board[i][j] == 'q' || board[i][j] == 'Q'){
                        avl =Pmove(board,i,j,k,l,5);
                    }
                    if(avl>0){
                    	break;
                    	}
                }
                if(avl>0){
                    	break;
                    	}
            }
            if(avl>0){
                    	break;
                    	}
        }
        if(avl>0){
                    	break;
                    	}
    }
    return avl;
}                            
