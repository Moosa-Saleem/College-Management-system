#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() 
{
    srand(time(0));
    int score = 0;
    int lives = 3;
    char directions[] = {'w', 'a', 's', 'd'};
    char user_move;

    cout << "==========================================================================" << endl;
    cout << "                           WELCOME TO SNAKE GAME                          " << endl;
    cout << "==========================================================================" << endl;
    cout << "RULES : THE COMPUTER WILL PLACE A FRUIT ON ONE DIRECTION(W,A,S,D) AND A DANGER BLOCK ON ANOTHER ! GUESS CORRECTLY TO SCORE POINTS" << endl;

    while (lives > 0) 
    {
        cout << "SCORE: " << score << " | LIVES: " << lives << endl;
        cout << "ENTER YOUR MOVE (W=UP, S=DOWN, A=LEFT, D=RIGHT): ";
        cin >> user_move;

        char fruit_index = rand() % 4;
        char block_index = rand() % 4;

        while (fruit_index == block_index) 
        {
            block_index = rand() % 4;
        }

        char computer_fruit = directions[fruit_index];
        char computer_block = directions[block_index];

        if (user_move == 'w' || user_move == 'W') 
        {
            if (computer_fruit == 'w') 
            {
                cout << "WOW ! THERE WAS A FRUIT ON 'W', +10 POINTS." << endl;
                score += 10;
            } 
            else if (computer_block == 'w') 
            {
                cout << "OH NO ! THERE WAS A DANGER BLOCK ON 'W', YOU LOST A LIFE." << endl;
                lives--;
            } 
            else 
            {
                cout << "SAFE! 'W' WAS EMPTY, PLAY THE NEXT TURN." << endl;
            }
        }
        else if (user_move == 'a' || user_move == 'A') 
        {
            if (computer_fruit == 'a') 
            {
                cout << "WOW ! THERE WAS A FRUIT ON 'A', +10 POINTS." << endl;
                score += 10;
            } 
            else if (computer_block == 'a') 
            {
                cout << "OH NO ! THERE WAS A DANGER BLOCK ON 'A', YOU LOST A LIFE." << endl;
                lives--;
            } 
            else 
            {
                cout << "SAFE! 'A' WAS EMPTY, PLAY THE NEXT TURN." << endl;
            }
        }
        else if (user_move == 'd' || user_move == 'D') 
        {
            if (computer_fruit == 'd') 
            {
                cout << "WOW ! THERE WAS A FRUIT ON 'D', +10 POINTS." << endl;
                score += 10;
            } 
            else if (computer_block == 'd') 
            {
                cout << "OH NO ! THERE WAS A DANGER BLOCK ON 'D', YOU LOST A LIFE." << endl;
                lives--;
            } 
            else 
            {
                cout << "SAFE! 'D' WAS EMPTY, PLAY THE NEXT TURN." << endl;
            }
        }
        else if (user_move == 's' || user_move == 'S') 
        {
            if (computer_fruit == 's') 
            {
                cout << "WOW ! THERE WAS A FRUIT ON 'S', +10 POINTS." << endl;
                score += 10;
            } 
            else if (computer_block == 's') 
            {
                cout << "OH NO ! THERE WAS A DANGER BLOCK ON 'S', YOU LOST A LIFE." << endl;
                lives--;
            } 
            else 
            {
                cout << "SAFE! 'S' WAS EMPTY, PLAY THE NEXT TURN." << endl;
            }
        }
        else 
        {
            cout << "INVALID INPUT! PLZ ENTER ONLY W,A,S,D" << endl;
        }

        cout << "--------------------------------------------------------------------------" << endl;
    }

    cout << "==========================================================================" << endl;
    cout << "                                GAME OVER !                               " << endl;
    cout << "==========================================================================" << endl;
    cout << "YOU LOST ALL LIVES !" << endl;
    cout << "YOUR FINAL SCORE IS : " << score << endl;

    return 0;
}