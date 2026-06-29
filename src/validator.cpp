#include "D:/archita/CODES/Advanced-Sudoku-Solver/include/sudoku.h"

/*
    Check whether 'num' already exists
    in the given row.
*/
bool checkRow(int row, int num)
{
    for (int col = 0; col < SIZE; col++)
    {
        if (board[row][col] == num)
            return false;
    }

    return true;
}

/*
    Check whether 'num' already exists
    in the given column.
*/
bool checkCol(int col, int num)
{
    for (int row = 0; row < SIZE; row++)
    {
        if (board[row][col] == num)
            return false;
    }

    return true;
}

/*
    Check 3x3 box.
*/
bool checkBox(int row, int col, int num)
{
    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[startRow + i][startCol + j] == num)
                return false;
        }
    }

    return true;
}

/*
    Returns true if placing num
    at (row,col) is valid.
*/
bool isSafe(int row, int col, int num)
{
    return checkRow(row, num) &&
           checkCol(col, num) &&
           checkBox(row, col, num);
}