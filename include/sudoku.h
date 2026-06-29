#ifndef SUDOKU_H
#define SUDOKU_H

#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 9;

// Global Sudoku Board
extern int board[SIZE][SIZE];

// Board Functions
void printBoard();
bool findEmpty(int &row, int &col);

// Validation Functions
bool checkRow(int row, int num);
bool checkCol(int col, int num);
bool checkBox(int row, int col, int num);
bool isSafe(int row, int col, int num);

// Solver
bool solve();

// MRV
vector<int> possibleValues(int row, int col);

struct Cell
{
    int row;
    int col;
    vector<int> values;
};

Cell findMRV();

bool forwardCheck();

// propagation
bool propagateConstraints();
// Generator
void generatePuzzle();

// Difficulty
string calculateDifficulty();

// generator
bool fillBoard();
vector<int> shuffledNumbers();

// Statistics
extern int recursionCalls;
extern int backtracks;

// Utility Functions
void inputPuzzle();
void loadDefaultPuzzle();

#endif

