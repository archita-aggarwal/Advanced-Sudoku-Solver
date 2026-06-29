#include "D:/archita/CODES/Advanced-Sudoku-Solver/include/sudoku.h"
#include <chrono>
using namespace std;

int main()
{
    int choice;

    while (true)
    {
        cout << "\n=====================================\n";
        cout << "      ADVANCED SUDOKU SOLVER\n";
        cout << "=====================================\n";

        cout << "\n1. Solve Default Puzzle";
        cout << "\n2. Generate Random Puzzle";
        cout << "\n3. Enter Your Own Puzzle";
        cout << "\n4. Exit";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            recursionCalls = 0;
            backtracks = 0;

            loadDefaultPuzzle();

            cout << "\nOriginal Puzzle\n";
            printBoard();

            auto start = chrono::high_resolution_clock::now();

            if (solve())
            {
                auto end = chrono::high_resolution_clock::now();

                cout << "\nSolved Puzzle\n";
                printBoard();

                auto duration =
                    chrono::duration_cast<chrono::milliseconds>(end - start);

                cout << "\n========== Statistics ==========\n";
                cout << "Recursive Calls : " << recursionCalls << endl;
                cout << "Backtracks      : " << backtracks << endl;
                cout << "Execution Time  : " << duration.count() << " ms\n";
            }
            else
            {
                cout << "\nNo Solution Exists!\n";
            }

            break;
        }

        case 2:
        {
            recursionCalls = 0;
            backtracks = 0;

            generatePuzzle();

            cout << "\nGenerated Puzzle\n";
            printBoard();

            cout << "\nDifficulty : "
                 << calculateDifficulty() << endl;

            auto start = chrono::high_resolution_clock::now();

            solve();

            auto end = chrono::high_resolution_clock::now();

            cout << "\nSolved Puzzle\n";
            printBoard();

            auto duration =
                chrono::duration_cast<chrono::milliseconds>(end - start);

            cout << "\n========== Statistics ==========\n";
            cout << "Recursive Calls : " << recursionCalls << endl;
            cout << "Backtracks      : " << backtracks << endl;
            cout << "Execution Time  : " << duration.count() << " ms\n";

            break;
        }

        case 3:
        {
            recursionCalls = 0;
            backtracks = 0;

            inputPuzzle();

            cout << "\nYour Puzzle\n";
            printBoard();

            auto start = chrono::high_resolution_clock::now();

            if (solve())
            {
                auto end = chrono::high_resolution_clock::now();

                cout << "\nSolved Puzzle\n";
                printBoard();

                auto duration =
                    chrono::duration_cast<chrono::milliseconds>(end - start);

                cout << "\n========== Statistics ==========\n";
                cout << "Recursive Calls : " << recursionCalls << endl;
                cout << "Backtracks      : " << backtracks << endl;
                cout << "Execution Time  : " << duration.count() << " ms\n";
            }
            else
            {
                cout << "\nInvalid Sudoku!\n";
            }

            break;
        }

        case 4:
        {
            cout << "\nThank You for using Advanced Sudoku Solver!\n";
            return 0;
        }

        default:
            cout << "\nInvalid Choice! Please try again.\n";
        }
    }

    return 0;
}
// second time
// int main(){
//     cout<<"=============================\n";
//     cout<<"ADVANCED SUDOKU SOLVER\n";
//     cout<<"=============================\n\n";
//     generatePuzzle();
//     cout<<"Difficulty : "<<calculateDifficulty()<<endl<<endl;
//     cout<<"Generated Puzzle\n\n";
//     printBoard();
//     solve();
//     cout<<"\nSolved Puzzle\n\n";
//     printBoard();
//     return 0;
// }
// first time
// int main(){
//     cout<<"=============================\n";
//     cout<<" ADVANCED SUDOKU SOLVER\n";
//     cout<<"=============================\n\n";
//     cout<<"Original Puzzle:\n\n";
//     printBoard();
//     cout<<"\nSolving...\n\n";
//     if(solve()){
//         cout<<"Solved Puzzle:\n\n";
//         printBoard();
//     }
//     else{
//         cout<<"No Solution Exists\n";
//     }
//     return 0;
// }