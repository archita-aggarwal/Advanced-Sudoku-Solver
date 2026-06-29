#include "D:/archita/CODES/Advanced-Sudoku-Solver/include/sudoku.h"

void inputPuzzle();
void loadDefaultPuzzle();
extern int recursionCalls;
extern int backtracks;

void inputPuzzle()
{
    cout<<"\nEnter Sudoku (0 for empty cell)\n\n";

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cin>>board[i][j];
        }
    }
}

void loadDefaultPuzzle()
{
    int temp[9][9]=
    {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            board[i][j]=temp[i][j];
        }
    }
}