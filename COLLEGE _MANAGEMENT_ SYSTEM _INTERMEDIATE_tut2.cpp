

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    cout<<setw(10)<<setfill('=')<<""<<"     COLLEGE MANAGEMENT SYSTEM (INTERMEDIATE)            "<<setw(10)<<""<<endl;
    int roll_num_ics_part_1[3];
    int roll_num_ics_part_2[3];
    string student_name_ics_part_1[3];
    string student_name_ics_part_2[3];
    int roll_num_FA_part_1[3];
    int roll_num_FA_part_2[3];
    string student_name_FA_part_1[3];
    string student_name_FA_part_2[3];
    int roll_num_FA_IT_part_1[3];
    int roll_num_FA_IT_part_2[3];
    string student_name_FA_IT_part_1[3];
    string student_name_FA_IT_part_2[3];
    for(int i=0;i<3;i++){
        cout<<" STUDENT ROLL NUMBER (ICS PART 1)  :";
        cin>>roll_num_ics_part_1[i];
        cout<<" STUDENT NAME (ICS PART 1)  :";
        cin>>student_name_ics_part_1[i];
        
    }
     for(int w=0;w<3;w++){
        cout<<" STUDENT ROLL NUMBER (ICS PART 2)  :";
        cin>>roll_num_ics_part_2[w];
        cout<<" STUDENT NAME (ICS PART 2)  :";
        cin>>student_name_ics_part_2[w];
        
    } for(int y=0;y<3;y++){
        cout<<" STUDENT ROLL NUMBER (F.A PART 1)  :";
        cin>>roll_num_FA_part_1[y];
        cout<<" STUDENT NAME (F.A PART 1)  :";
        cin>>student_name_FA_part_1[y];
        
    } for(int y=0;y<3;y++){
        cout<<" STUDENT ROLL NUMBER (F.A PART 2)  :";
        cin>>roll_num_FA_part_2[y];
        cout<<" STUDENT NAME (F.A PART 2)  :";
        cin>>student_name_FA_part_2[y];
        
    } for(int y=0;y<3;y++){
        cout<<" STUDENT ROLL NUMBER (F.A(IT) PART 1)  :";
        cin>>roll_num_FA_IT_part_1[y];
        cout<<" STUDENT NAME (F.A(IT) PART 1)  :";
            cin>>student_name_FA_IT_part_1[y];}
              
     for(int y=0;y<3;y++){
        cout<<" STUDENT ROLL NUMBER (F.A(IT) PART 2)  :";
        cin>>roll_num_FA_IT_part_2[y];
        cout<<" STUDENT NAME (F.A(IT) PART 2)  :";
                cin>>student_name_FA_IT_part_2[y];}
    
        
    int search_roll;
    int class_choice;
    bool found = false;

    cout << "\n==========================================" << endl;
    cout << "               SEARCH MENU                " << endl;
    cout << "==========================================" << endl;
    cout << "1. ICS Part 1" << endl;
    cout << "2. ICS Part 2" << endl;
    cout << "3. F.A Part 1" << endl;
    cout << "4. F.A Part 2" << endl;
    cout << "5. F.A(IT) Part 1" << endl;
    cout << "6. F.A(IT) Part 2" << endl;
    cout << "Select Class (1-6): ";
    cin >> class_choice;

    cout << "Enter Roll Number to Search: ";
    cin >> search_roll; 

    
    if (class_choice == 1) {
        for (int s = 0; s < 3; s++) {
            if (search_roll == roll_num_ics_part_1[s]) {
                cout << "STUDENT NAME IS: " << student_name_ics_part_1[s] << endl;
                found = true;
                break;
            }
        }
    } 
    else if (class_choice == 2) {
        for (int s = 0; s < 3; s++) {
            if (search_roll == roll_num_ics_part_2[s]) {
                cout << "STUDENT NAME IS: " << student_name_ics_part_2[s] << endl;
                found = true;
                break;
            }
        }
    } 
    else if (class_choice == 3) {
        for (int s = 0; s < 3; s++) {
            if (search_roll == roll_num_FA_part_1[s]) {
                cout << "STUDENT NAME IS: " << student_name_FA_part_1[s] << endl;
                found = true;
                break;
            }
        }
    } 
    else if (class_choice == 4) {
        for (int s = 0; s < 3; s++) {
            if (search_roll == roll_num_FA_part_2[s]) {
                cout << "STUDENT NAME IS: " << student_name_FA_part_2[s] << endl;
                found = true;
                break;
            }
        }
    } 
    else if (class_choice == 5) {
        for (int s = 0; s < 3; s++) {
            if (search_roll == roll_num_FA_IT_part_1[s]) {
                cout << "STUDENT NAME IS: " << student_name_FA_IT_part_1[s] << endl;
                found = true;
                break;
            }
        }
    } 
    else if (class_choice == 6) {
        for (int s = 0; s < 3; s++) {
            if (search_roll == roll_num_FA_IT_part_2[s]) {
                cout << "STUDENT NAME IS: " << student_name_FA_IT_part_2[s] << endl;
                found = true;
                break;
            }
        }
    } 
    else {
        cout << "Invalid Class Selection!" << endl;
        return 0; 
    }

    
    if (!found) {
        cout << "INVALID ROLL NO (Not found in the selected class)" << endl;
    }



return 0;
}
