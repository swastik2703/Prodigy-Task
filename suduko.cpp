#include <iostream>
#define N 9
using namespace std;
int grid[N][N] = { 
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 6, 0, 1, 0, 9, 0, 0},
    {0, 0, 7, 8, 0, 0, 0, 0, 2},
    {0, 0, 0, 0, 4, 0, 0, 0, 3},
    {0, 0, 1, 0, 7, 0, 0, 0, 8},
    {0, 7, 4, 0, 9, 0, 0, 2, 0},
    {4, 3, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 2, 5, 0, 0, 0, 0, 6},
    {6, 0, 0, 1, 0, 0, 0, 3, 0}
};
bool isInCol(int col, int num)  //checking for num  in col 
{
    for (int row = 0; row < N; row++)
        if (grid[row][col] == num)
            return true;
    return false;
}
bool isInRow(int row, int num)  //checking for num in row
{
    for (int col = 0; col < N; col++)
        if (grid[row][col] == num)
            return true;
    return false;
}
bool isInBox(int boxStartRow, int boxStartCol, int num)  //check for num in 3x3 box
{
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (grid[row+boxStartRow][col+boxStartCol] == num)
                return true;
    return false;
}
bool findEmpty(int &row, int &col)  
{
    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (grid[row][col] == 0)   //marked with 0 is empty
                return true;
    return false;
}
bool isValid(int row, int col, int num)
{
    return !isInRow(row, num) && !isInCol(col, num) &&    //when num satisfies all conditions
           !isInBox(row - row%3 , col - col%3, num);
}
void sudokuGrid()  //print the sudoku grid after solving
{
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            if(col == 3 || col == 6)
                cout << " | ";
            cout << grid[row][col] <<" ";
        }
        if(row == 2 || row == 5) {
            cout << endl;
            for(int i = 0; i<N; i++)
                cout << "---";
        }
        cout << endl;
    }
}
bool solveSudoku()
{
    int row, col;
    if (!findEmpty(row, col))
        return true;                     //when all places are filled
    for (int num = 1; num <= 9; num++) { 
        if (isValid(row, col, num)) {    //if validplace,we continue
            grid[row][col] = num;
            if (solveSudoku())           //recursively checking for other spaces
                return true;
            grid[row][col] = 0;          //turn to unassigned space when conditions are not satisfied
        }
    }
    return false;
}
int main()
{
    if (solveSudoku() == true)
        sudokuGrid();
    else
        cout << "Enter a Valid Puzzle";
}