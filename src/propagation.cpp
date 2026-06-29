#include "D:/archita/CODES/Advanced-Sudoku-Solver/include/sudoku.h"

bool propagateConstraints()
{
    bool changed = false;

    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            if(board[i][j] == 0)
            {
                vector<int> values = possibleValues(i, j);

                if(values.size() == 1)
                {
                    board[i][j] = values[0];
                    changed = true;
                }
            }
        }
    }

    return changed;
}