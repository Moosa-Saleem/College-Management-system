#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 

    int player_choice;
    cout << "1. Stone\n2. Paper\n3. Scissor\nEnter your choice (1-3): ";
    cin >> player_choice;

    int computer_choice = (rand() % 3) + 1;
    cout << "Computer chose: " << computer_choice << endl;

    if (player_choice == computer_choice) {
        cout << "Match Draw!" << endl;
    } 
    else if ((player_choice == 1 && computer_choice == 3) || 
             (player_choice == 2 && computer_choice == 1) || 
             (player_choice == 3 && computer_choice == 2)) {
        cout << "Congratulations! You WIN!" << endl;
    } 
    else {
        cout << "Computer WINS! Try again." << endl;
    }

    return 0;
}