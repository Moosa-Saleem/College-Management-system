#include<iostream>
#include<string>

using namespace std;
void mini_quiz_program(){
    cout<<"=============WELCOME TO MINI QUIZ==========="<<endl;
    int score = 0;

    string questions[] = {
        "WHAT IS THE CAPITAL OF PAKISTAN ?",
        "WHICH IS THE LARGEST CITY OF PAKISTAN BY POPULATION ?",
        "WHAT IS THE NATIONAL GAME OF PAKISTAN ?"
    };

    string options[][4] = {
        {"Lahore", "Karachi", "Peshawar", "Islamabad"},     
        {"Lahore", "Faisalabad", "Karachi", "Rawalpindi"}, 
        {"Cricket", "Hockey", "Football", "Squash"}        
    };

    char correct_answers[] = {'D', 'C', 'B'}; 

    for(int i = 0; i < 3; i++){
        cout << "\nQ" << (i + 1) << ": " << questions[i] << endl;
        cout << "**OPTIONS**" << endl;
        cout << "A. " << options[i][0] << endl;
        cout << "B. " << options[i][1] << endl;
        cout << "C. " << options[i][2] << endl;
        cout << "D. " << options[i][3] << endl;

        char select;
        cout << "ENTER THE RIGHT OPTION (A/B/C/D): ";
        cin >> select;
        if(select == correct_answers[i] || select == (correct_answers[i] + 32)){
            cout << "YOUR ANSWER IS CORRECT! " << endl;
            score += 10;
        } else {
            cout << "YOUR ANSWER IS WRONG!  Correct option was " << correct_answers[i] << endl;
        }
    }

    cout << "\n=====================================" << endl;
    cout << "   QUIZ OVER! TOTAL SCORE: " << score << "/30 " << endl;
    cout << "=====================================" << endl;}

int main() {
    mini_quiz_program(); 
    return 0;
}
