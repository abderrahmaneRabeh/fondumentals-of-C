#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// GLOCAL VARIABLES

char Board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

// FUNCTION PROTOTYPE
void Reset__board();
void Print__Board();
int Check__free_Spaces();
void Player__turn();
void Computer__turn();
char Check__Win();
void Print__Winner(char);

int main()
{
    char winner = ' ', reset_game; // if X wins we assign X and if O wins we assign *

    do
    {
        winner = ' ';
        reset_game = ' ';

        Reset__board();

        while (winner == ' ' && Check__free_Spaces() != 0)
        {
            Print__Board();

            // player Move
            Player__turn();
            winner = Check__Win();

            if (winner != ' ' || Check__free_Spaces() == 0)
            {
                break;
            }

            // Computer Move
            Computer__turn();
            winner = Check__Win();

            if (winner != ' ' || Check__free_Spaces() == 0)
            {
                break;
            }
        }

        Print__Board();
        Print__Winner(winner);

        printf("Do you want to play again ? (y/n) : ");
        scanf(" %c", &reset_game);
        reset_game = tolower(reset_game);

    } while (reset_game == 'y');

    return 0;
}

// FUNCTIONS

void Reset__board()
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Board[i][j] = ' ';
        }
    }
};
void Print__Board()
{
    printf("\n");
    printf("\t\t\t\t %c | %c | %c\n", Board[0][0], Board[0][1], Board[0][2]);
    printf("\t\t\t\t---+---+---\n");
    printf("\t\t\t\t %c | %c | %c\n", Board[1][0], Board[1][1], Board[1][2]);
    printf("\t\t\t\t---+---+---\n");
    printf("\t\t\t\t %c | %c | %c\n", Board[2][0], Board[2][1], Board[2][2]);

    printf("\n");
};
int Check__free_Spaces()
{

    int free_Spaces = 9;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            if (Board[i][j] != ' ')
            {
                free_Spaces--;
            }
        }
    }

    return free_Spaces;
};
void Player__turn()
{

    int x, y;

    do
    {
        printf("Enter Your Position  Row (1-3) : ");
        scanf("%d", &x);
        x--; // to convert 1,2,3 to 0,1,2

        printf("Enter Your Position  Column (1-3) : ");
        scanf("%d", &y);
        y--; // to convert 1,2,3 to 0,1,2

        if (Board[x][y] == ' ')
        {
            Board[x][y] = PLAYER;

            break;
        }
        else
        {
            printf("Invalid Position\n");
        }
    } while (Board[x][y] != ' ');
};

void Computer__turn()
{

    srand(time(0));
    int x, y;

    if (Check__free_Spaces > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;

        } while (Board[x][y] != ' ');

        Board[x][y] = COMPUTER;
    }
    else
    {
        Print__Winner(' ');
    }
};

char Check__Win()
{

    // Check Rows
    for (int i = 0; i < 3; i++)
    {
        if (Board[i][0] == Board[i][1] && Board[i][0] == Board[i][2])
        {
            return Board[i][0];
        }
    }
    // Check Columns
    for (int i = 0; i < 3; i++)
    {
        if (Board[0][i] == Board[1][i] && Board[0][i] == Board[2][i])
        {
            return Board[0][i];
        }
    }

    // Check Diagonals
    if (Board[0][0] == Board[1][1] && Board[0][0] == Board[2][2])
    {
        return Board[0][0];
    }
    if (Board[0][2] == Board[1][1] && Board[0][2] == Board[2][0])
    {
        return Board[0][2];
    }

    return ' ';
};

void Print__Winner(char winner)
{

    if (winner == PLAYER)
    {
        printf("YOU WIN\n");
    }
    else if (winner == COMPUTER)
    {
        printf("YOU LOSE\n");
    }
    else
    {
        printf("DRAW\n");
    }
};