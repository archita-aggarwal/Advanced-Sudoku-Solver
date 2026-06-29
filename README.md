# 🧩 Advanced Sudoku Solver (C++)

A modular Sudoku Solver and Generator implemented in C++ using Backtracking and CSP heuristics.

---

## Features

- Solve any valid 9×9 Sudoku
- Backtracking Algorithm
- MRV (Minimum Remaining Values)
- Forward Checking
- Constraint Propagation
- Random Puzzle Generator
- Difficulty Detection
- User Input Mode
- Execution Time
- Statistics
- Modular Project Structure

---

## Project Structure

```
include/
src/
README.md
LICENSE
```

---

## Algorithms Used

- Backtracking
- Constraint Satisfaction Problem (CSP)
- MRV Heuristic
- Forward Checking
- Constraint Propagation

---

## Compile

```bash
g++ src/*.cpp -Iinclude -o sudoku
```

---

## Run

```bash
./sudoku
```

Windows:

```bash
sudoku.exe
```

---

## Sample Output

```
Original Puzzle

5 3 . . 7 . . . .
6 . . 1 9 5 . . .
...

Solved Puzzle

5 3 4 6 7 8 9 1 2
...
```

---

## Future Improvements

- GUI
- Bitmask Optimization
- Unique Solution Generator
- File Input/Output
- Unit Testing

---

## Author

Archita