#include "D:/archita/CODES/Advanced-Sudoku-Solver/include/sudoku.h"
int recursionCalls = 0;
int backtracks = 0;
/*
    Find the next empty cell.
    Returns true if an empty cell exists.
*/
bool findEmpty(int &row, int &col)
{
    for (row = 0; row < SIZE; row++)
    {
        for (col = 0; col < SIZE; col++)
        {
            if (board[row][col] == 0)
                return true;
        }
    }

    return false;
}

// Recursive Backtracking Solver updated 
bool solve()
{
    recursionCalls++;

    Cell cell=findMRV();

    if(cell.row==-1)
        return true;

    for(int num:cell.values)
    {
        board[cell.row][cell.col]=num;

        if(forwardCheck() && solve())
            return true;

        board[cell.row][cell.col]=0;

        backtracks++;
    }

    return false;
}



// aur optimize karo
// bool solve(){
//     while(propagateConstraints());
//     Cell cell = findMRV();
//     if(cell.row == -1)
//         return true;
//     for(int num : cell.values){
//         board[cell.row][cell.col] = num;
//         if(forwardCheck() && solve())
//             return true;
//         board[cell.row][cell.col] = 0;
//     }
//     return false;
// }


// Output same rahega hr case me
// lekin hard puzzles par speed improve hogi.
// bool solve()
// {
//     Cell cell = findMRV();

//     if(cell.row == -1)
//         return true;

//     for(int num : cell.values)
//     {
//         board[cell.row][cell.col] = num;

//         // Forward Checking
//         if(forwardCheck())
//         {
//             if(solve())
//                 return true;
//         }

//         // Backtrack
//         board[cell.row][cell.col] = 0;
//     }

//     return false;
// }


// second one   
// Ab findEmpty() ki zarurat nahi padegi
// bool solve()
// {
//     Cell cell = findMRV();

//     // No empty cell left
//     if(cell.row == -1)
//         return true;

//     for(int num : cell.values)
//     {
//         board[cell.row][cell.col] = num;

//         if(solve())
//             return true;

//         board[cell.row][cell.col] = 0;
//     }

//     return false;
// }
//first wala 
// bool solve()
// {
//     int row, col;

//     // No empty cell means puzzle solved
//     if (!findEmpty(row, col))
//         return true;

//     // Try numbers 1 to 9
//     for (int num = 1; num <= 9; num++)
//     {
//         if (isSafe(row, col, num))
//         {
//             // Place number
//             board[row][col] = num;

//             // Solve remaining board
//             if (solve())
//                 return true;

//             // Backtrack
//             board[row][col] = 0;
//         }
//     }

//     return false;
// }