#include "D:/archita/CODES/Advanced-Sudoku-Solver/include/sudoku.h"

string calculateDifficulty();

string calculateDifficulty()
{
    int empty = 0;

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(board[i][j] == 0)
                empty++;
        }
    }

    if(empty < 35)
        return "Easy";

    if(empty < 45)
        return "Medium";

    if(empty < 55)
        return "Hard";

    return "Expert";
}