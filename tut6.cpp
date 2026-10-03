#include <iostream>

using namespace std;

int main() {
    char secretWord[5] = {'a', 'p', 'p', 'l', 'e'}; 
    int lives = 6;
    char playerGuess;

    cout << "--- DIRECT MATCH HANGMAN ---\n";
    cout << "Computer has thought of a 5-letter word.\n";
    cout << "Enter any alphabet to check if it is in the word or not!\n\n";

    while (lives > 0) {
        cout << "Remaining lives: " << lives << "\n";
        cout << "Enter an alphabet: ";
        cin >> playerGuess;

        bool found = false;

        for (int i = 0; i < 5; i++) {
            if (secretWord[i] == playerGuess) {
                found = true; 
            }
        }

        if (found == true) {
            cout << "\nAwesome! Your alphabet '" << playerGuess << "' is present in the word!\n";
        } else {
            lives--; 
            cout << "\nWrong guess! Alphabet '" << playerGuess << "' is not in the word.\n";
        }

        cout << "------------------------------------\n\n";
    }

    if (lives == 0) {
        cout << "Game Over! You have lost all your lives.\n";
        cout << "The correct word was: apple\n";
    }

    return 0;
}