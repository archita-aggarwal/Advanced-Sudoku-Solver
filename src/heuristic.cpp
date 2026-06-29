#include "D:/archita/CODES/Advanced-Sudoku-Solver/include/sudoku.h"

// Returns all possible values for a cell
vector<int> possibleValues(int row, int col)
{
    vector<int> values;

    if(board[row][col] != 0)
        return values;

    for(int num = 1; num <= 9; num++)
    {
        if(isSafe(row, col, num))
            values.push_back(num);
    }

    return values;
}

// Find the empty cell with minimum possible values
Cell findMRV()
{
    Cell best;
    best.row = -1;
    best.col = -1;
    best.values.clear();

    int minChoices = 10;

    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            if(board[i][j] == 0)
            {
                vector<int> choices = possibleValues(i, j);

                if((int)choices.size() < minChoices)
                {
                    minChoices = choices.size();
                    best.row = i;
                    best.col = j;
                    best.values = choices;
                }
            }
        }
    }

    return best;
}

bool forwardCheck()
{
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            if(board[i][j] == 0)
            {
                vector<int> values = possibleValues(i, j);

                // Agar kisi empty cell ke paas koi option hi nahi bacha
                if(values.empty())
                    return false;
            }
        }
    }

    return true;
}