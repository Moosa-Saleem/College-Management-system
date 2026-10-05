#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int secretNumber = (rand() % 20) + 1;
    int playerGuess;
    int lives = 3;
    int score = 0;

    cout << "--- NUMBER GUESSING GAME ---" << endl;
    cout << "Computer has chosen a number between 1 and 20." << endl;
    cout << "You have 3 lives to guess it right!" << endl;
    cout << "---------------------------------------------" << endl;

    while (lives > 0) {
        cout << "Remaining lives: " << lives << " | Current Score: " << score << endl;
        cout << "Enter your guess (1-20): ";
        cin >> playerGuess;

        if (playerGuess == secretNumber) {
            cout << "\nAwesome! You guessed the correct number!" << endl;
            score += 10;
            cout << "Your score is increased by 10 points.\n" << endl;
            
            secretNumber = (rand() % 20) + 1; 
        } 
        else {
            lives--;
            cout << "\nWrong guess! ";
            if (lives > 0) {
                if (playerGuess < secretNumber) {
                    cout << "The secret number is HIGHER than your guess." << endl;
                } else {
                    cout << "The secret number is LOWER than your guess." << endl;
                }
            }
            cout << "---------------------------------------------" << endl;
        }
    }

    cout << "\n=============================================" << endl;
    cout << "                 GAME OVER !                 " << endl;
    cout << "=============================================" << endl;
    cout << "You lost all your lives." << endl;
    cout << "The correct secret number was: " << secretNumber << endl;
    cout << "Your FINAL SCORE is: " << score << endl;

    return 0;
}
