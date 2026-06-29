#include "D:/archita/CODES/Advanced-Sudoku-Solver/include/sudoku.h"
#include <algorithm>
#include <random>
#include <ctime>

using namespace std;
void removeCells(int count);
void generatePuzzle();

// Shuffle numbers from 1 to 9
vector<int> shuffledNumbers()
{
    vector<int> nums = {1,2,3,4,5,6,7,8,9};

    random_device rd;
    mt19937 g(rd());

    shuffle(nums.begin(), nums.end(), g);

    return nums;
}

// Fill board randomly
bool fillBoard()
{
    Cell cell = findMRV();

    if(cell.row == -1)
        return true;

    vector<int> nums = shuffledNumbers();

    for(int num : nums)
    {
        if(isSafe(cell.row, cell.col, num))
        {
            board[cell.row][cell.col] = num;

            if(fillBoard())
                return true;

            board[cell.row][cell.col] = 0;
        }
    }

    return false;
}

void removeCells(int count)
{
    srand(time(0));

    while(count > 0)
    {
        int row = rand()%9;
        int col = rand()%9;

        if(board[row][col] != 0)
        {
            board[row][col] = 0;
            count--;
        }
    }
}

void generatePuzzle()
{
    // Clear board
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
            board[i][j]=0;
    }

    fillBoard();

    // Remove 40 cells
    removeCells(40);
}