#include <stdio.h>
#include <string.h>
#include "rock_paper_scissors.h"

int main(int argc, char* argv[]);
void playRockPaperScissors(const char* player1, const char* player2, char* result)
{
    if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
        (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0) ||
        (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0))
    {
        strcpy_s(result, 10, "Player1");
    }
    else if ((strcmp(player2, "Rock") == 0 && strcmp(player1, "Scissors") == 0) ||
        (strcmp(player2, "Scissors") == 0 && strcmp(player1, "Paper") == 0) ||
        (strcmp(player2, "Paper") == 0 && strcmp(player1, "Rock") == 0))
    {
        strcpy_s(result, 10, "Player2");
    }
    else if (strcmp(player1, player2) == 0)
    {
        strcpy_s(result, 10, "Draw");
    }
    else
    {
        strcpy_s(result, 10, "Invalid");
    }
}