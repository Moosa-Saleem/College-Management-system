#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    srand(time(0)); 

    char b1='_', b2='_', b3='_', b4='_', b5='_', b6='_', b7='_', b8='_', b9='_';
    int move;

    cout << "---  MOVES TIC TAC TOE (FAIR CHANCE) ---\n\n";
    cout << "GUIDE (Box numbers):\n";
    cout << " 1 | 2 | 3 \n---|---|---\n 4 | 5 | 6 \n---|---|---\n 7 | 8 | 9 \n\n";

    cout << "Enter your FIRST move (1-9): ";
    cin >> move;
    if (move == 1) b1 = 'X';
    else if (move == 2) b2 = 'X';
    else if (move == 3) b3 = 'X';
    else if (move == 4) b4 = 'X';
    else if (move == 5) b5 = 'X';
    else if (move == 6) b6 = 'X';
    else if (move == 7) b7 = 'X';
    else if (move == 8) b8 = 'X';
    else if (move == 9) b9 = 'X';

    int comp1 = (rand() % 9) + 1;
    cout << "Computer chose FIRST move: " << comp1 << "\n";
    if (comp1 == 1 && b1 == '_') b1 = 'O';
    else if (comp1 == 2 && b2 == '_') b2 = 'O';
    else if (comp1 == 3 && b3 == '_') b3 = 'O';
    else if (comp1 == 4 && b4 == '_') b4 = 'O';
    else if (comp1 == 5 && b5 == '_') b5 = 'O';
    else if (comp1 == 6 && b6 == '_') b6 = 'O';
    else if (comp1 == 7 && b7 == '_') b7 = 'O';
    else if (comp1 == 8 && b8 == '_') b8 = 'O';
    else if (comp1 == 9 && b9 == '_') b9 = 'O';
    else b2 = 'O'; 

    cout << "\nEnter your SECOND move (1-9): ";
    cin >> move;
    if (move == 1 && b1 == '_') b1 = 'X';
    else if (move == 2 && b2 == '_') b2 = 'X';
    else if (move == 3 && b3 == '_') b3 = 'X';
    else if (move == 4 && b4 == '_') b4 = 'X';
    else if (move == 5 && b5 == '_') b5 = 'X';
    else if (move == 6 && b6 == '_') b6 = 'X';
    else if (move == 7 && b7 == '_') b7 = 'X';
    else if (move == 8 && b8 == '_') b8 = 'X';
    else if (move == 9 && b9 == '_') b9 = 'X';

    int comp2 = (rand() % 9) + 1;
    cout << "Computer chose SECOND move: " << comp2 << "\n";
    if (comp2 == 1 && b1 == '_') b1 = 'O';
    else if (comp2 == 2 && b2 == '_') b2 = 'O';
    else if (comp2 == 3 && b3 == '_') b3 = 'O';
    else if (comp2 == 4 && b4 == '_') b4 = 'O';
    else if (comp2 == 5 && b5 == '_') b5 = 'O';
    else if (comp2 == 6 && b6 == '_') b6 = 'O';
    else if (comp2 == 7 && b7 == '_') b7 = 'O';
    else if (comp2 == 8 && b8 == '_') b8 = 'O';
    else if (comp2 == 9 && b9 == '_') b9 = 'O';
    else b6 = 'O'; 

    cout << "\nEnter your THIRD move (1-9): ";
    cin >> move;
    if (move == 1 && b1 == '_') b1 = 'X';
    else if (move == 2 && b2 == '_') b2 = 'X';
    else if (move == 3 && b3 == '_') b3 = 'X';
    else if (move == 4 && b4 == '_') b4 = 'X';
    else if (move == 5 && b5 == '_') b5 = 'X';
    else if (move == 6 && b6 == '_') b6 = 'X';
    else if (move == 7 && b7 == '_') b7 = 'X';
    else if (move == 8 && b8 == '_') b8 = 'X';
    else if (move == 9 && b9 == '_') b9 = 'X';

    int comp3 = (rand() % 9) + 1;
    cout << "Computer chose THIRD move: " << comp3 << "\n";
    if (comp3 == 1 && b1 == '_') b1 = 'O';
    else if (comp3 == 2 && b2 == '_') b2 = 'O';
    else if (comp3 == 3 && b3 == '_') b3 = 'O';
    else if (comp3 == 4 && b4 == '_') b4 = 'O';
    else if (comp3 == 5 && b5 == '_') b5 = 'O';
    else if (comp3 == 6 && b6 == '_') b6 = 'O';
    else if (comp3 == 7 && b7 == '_') b7 = 'O';
    else if (comp3 == 8 && b8 == '_') b8 = 'O';
    else if (comp3 == 9 && b9 == '_') b9 = 'O';
    else b8 = 'O';

    cout << "\n--- FINAL BOARD ---\n\n";
    cout << " " << b1 << " | " << b2 << " | " << b3 << " \n";
    cout << "---|---|---\n";
    cout << " " << b4 << " | " << b5 << " | " << b6 << " \n";
    cout << "---|---|---\n";
    cout << " " << b7 << " | " << b8 << " | " << b9 << " \n\n";

    if ((b1=='X' && b2=='X' && b3=='X') || (b4=='X' && b5=='X' && b6=='X') || (b7=='X' && b8=='X' && b9=='X') ||
        (b1=='X' && b4=='X' && b7=='X') || (b2=='X' && b5=='X' && b8=='X') || (b3=='X' && b6=='X' && b9=='X') ||
        (b1=='X' && b5=='X' && b9=='X') || (b3=='X' && b5=='X' && b7=='X')) {
        cout << "Congratulations! You WIN!\n";
    } 
    else if ((b1=='O' && b2=='O' && b3=='O') || (b4=='O' && b5=='O' && b6=='O') || (b7=='O' && b8=='O' && b9=='O') ||
             (b1=='O' && b4=='O' && b7=='O') || (b2=='O' && b5=='O' && b8=='O') || (b3=='O' && b6=='O' && b9=='O') ||
             (b1=='O' && b5=='O' && b9=='O') || (b3=='O' && b5=='O' && b7=='O')) {
        cout << "Computer WINS!\n";
    }
    else {
        cout << "Game is ongoing or it is a draw!\n";
    }

    return 0; 
}
