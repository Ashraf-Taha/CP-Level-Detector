#include <bits/stdc++.h>

using namespace std;

bool canSolve(int preblemNumber){
    cout << "---------------------------------------------------\n Can you solve problem number " << preblemNumber << "? \n(if YES enter 1, if NO enter 0) : ";
    int couldSolve;
    cin >> couldSolve;
    if(couldSolve && couldSolve != 1)
     return cout << "\n WRONG INPUT \n", canSolve(preblemNumber);

    return couldSolve;
}
int getStartProblemToSolve(int startRow, int endRow){
    int midRow = (startRow + endRow) / 2;
    while(startRow < endRow){
        if(canSolve(midRow))
            startRow = midRow;
        else
            endRow = midRow - 1;
        midRow = (startRow + endRow + 1) / 2;
    }
    return startRow + 1;
}
int main()
{
    cout << "------- WELCOME AT YOUR CP LEVEL DETECTOR --------\n";
    int startRow, endRow;
    cout << "Enter the number of the first problem :   ";
    cin >> startRow;
    cout << "\nEnter the number of the end problem :   ";
    cin >> endRow;
    int startProblemToSolve = getStartProblemToSolve(startRow, endRow);
    return cout << "\n---------------------------------------------------\n    You can start the sheet from problem " << startProblemToSolve << "    \n---------------------------------------------------\nBY ASHRAF TAHA - HEISENBERG_101 \n", 0;
}
