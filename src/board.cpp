#include "D:/archita/CODES/Advanced-Sudoku-Solver/include/sudoku.h"

int board[SIZE][SIZE]=
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

void printBoard()
{
    cout<<"-------------------------\n";

    for(int i=0;i<SIZE;i++)
    {
        if(i%3==0 && i!=0)
            cout<<"-------------------------\n";

        for(int j=0;j<SIZE;j++)
        {
            if(j%3==0)
                cout<<"| ";

            if(board[i][j]==0)
                cout<<". ";
            else
                cout<<board[i][j]<<" ";
        }

        cout<<"|\n";
    }

    cout<<"-------------------------\n";
}