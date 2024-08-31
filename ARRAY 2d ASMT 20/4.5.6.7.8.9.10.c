//----->Question Num- 4,5,6,7,8,9,10!
#include<stdio.h>
void update_score_board(int [4][4]);
void display_score_board(int [4][4]);
int get_specific_player_score(int, int [4][4]);
void players_rank(int [], int);
void tournament_winner(int [4][4]);

int main()
{
    int score_board[4][4] = {0}, player_score;
    
    update_score_board(score_board); //use for updating score board!

    display_score_board(score_board);  //use for printing score board!
    
    //use for printing specific player score!
    int n;
    printf("Enter Specific Player Number : ");
    scanf("%d",&n);
    player_score = get_specific_player_score(n, score_board);
    printf("Score of the Player%d = %d",n,player_score);
    printf("\n");

    tournament_winner(score_board);

    return 0;
}

void update_score_board(int update_score[4][4])
{
    //updating score board!
    int i,j,result;  
    for(i=0; i<4; i++)
    {
        for(j=i; j<4; j++)
        {
            if(i==j)
                update_score[i][j] = -1;
            else
            {
                printf("Enter P%d and P%d match result:",i,j);
                scanf("%d",&result);
                update_score[i][j] = result;
                update_score[j][i] = 2-result;
            }
        }
        printf("\n");
    }
    
} 

void display_score_board(int display_score[4][4])
{
    //printing score board!
    printf("Updated Matches Scores:\n");
    int i,j;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            printf("%d ", display_score[i][j]);

        printf("\n");
    }
    printf("\n");
}


void tournament_winner(int winner[4][4])
{
    //intiellizing winner_score array!
    printf("\nPlayers Score:\n");
    int i,j,k, winner_score[4];
    for(i=0; i<4; i++)
    {
        winner_score[i] = get_specific_player_score(i, winner);
        printf("Player%d: Score = %d\n",i, winner_score[i]);
    }
    printf("\n");
    printf("\n");

    players_rank(winner_score, 4);
    

    //finding max_score in winner_score array!
    int max_score = winner_score[0], temp = 0;
    for(i=1; i<4; i++)
    {
        if(winner_score[i] > max_score)
        {
            max_score = winner_score[i];
            temp = i;   
        }
    }

    //printing tournament winner and that score!
    printf("\nWinner of the Tournament is Player%d ",temp);
    printf("\nWinner's Score = %d",max_score);
}

int get_specific_player_score(int player, int player_score_board[4][4])
{
    int j,sum = 0;
    for(j=0; j<4; j++)
            sum = sum + player_score_board[player][j];

    return sum;
}

void players_rank(int players_score_board[], int x)
{
    printf("Players Rank:\n");
    int i,j, max = players_score_board[0], temp =0;
    for(i=0; i<x; i++)
    {
        for(j=1; j<x; j++)
        {
            if(players_score_board[j] > max)
            {
                max = players_score_board[j];
                temp = j;  
            }
        }
        printf("Rank %d: Player%d\n",i+1,temp); 
        players_score_board[temp] = -2;
        max = players_score_board[0];
    }
}