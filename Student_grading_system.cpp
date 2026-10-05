#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int marks[5]; 
    int totalMarks = 0;
    float percentage;

    cout << "=== STUDENT GRADING SYSTEM ===" << endl;
    cout << "Enter student name: ";
    getline(cin, studentName);

    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for Subject " << i + 1 << " (out of 100): ";
        cin >> marks[i];
        totalMarks = totalMarks + marks[i]; 
    }

    percentage = (totalMarks / 500.0) * 100;

    cout << "\n-----------------------------" << endl;
    cout << "RESULT SHEET FOR: " << studentName << endl;
    cout << "Total Obtained Marks: " << totalMarks << " / 500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 80) {
        cout << "FINAL GRADE: A+" << endl;
    }
    else if (percentage >= 70) {
        cout << "FINAL GRADE: A" << endl;
    }
    else if (percentage >= 60) {
        cout << "FINAL GRADE: B" << endl;
    }
    else if (percentage >= 50) {
        cout << "FINAL GRADE: C" << endl;
    }
    else if (percentage >= 40) {
        cout << "FINAL GRADE: D" << endl;
    }
    else {
        cout << "FINAL GRADE: F (Fail)" << endl;
    }
    cout << "-----------------------------" << endl;

    return 0;
}
