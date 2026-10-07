#include<iostream>
#include<string>
using namespace std;

int main() {
    // Array size is fixed to reserve memory beforehand
    const int MAX_LIMIT = 100;
    
    // Patient Data Arrays
    string patient_name[MAX_LIMIT];
    string patient_gender[MAX_LIMIT];
    long long patient_CNIC[MAX_LIMIT];
    int patient_age[MAX_LIMIT];
    string patient_address[MAX_LIMIT];
    string patient_disease[MAX_LIMIT];
    string patient_contact_number[MAX_LIMIT];
    string patient_status[MAX_LIMIT];
    int patient_count = 0; // Tracks the total number of registered patients

    // Doctor Data Arrays
    string doctor_name[MAX_LIMIT];
    string doctor_gender[MAX_LIMIT];
    long long doctor_CNIC[MAX_LIMIT];
    int doctor_age[MAX_LIMIT];
    string doctor_contact_number[MAX_LIMIT];
    string doctor_availability_days[MAX_LIMIT];
    string doctor_specialization[MAX_LIMIT];
    int doctor_count = 0; // Tracks the total number of registered doctors

    int choice;

    // Infinite loop ensures the program runs until explicitly exited
    while(true) {
        cout<<"\n====================== HOSPITAL MANAGEMENT SYSTEM ===================="<<endl;
        cout<<"1. ADD PATIENT"<<endl;
        cout<<"2. ADD DOCTOR"<<endl;
        cout<<"3. BOOK APPOINTMENT"<<endl;
        cout<<"4. EXIT SYSTEM"<<endl;
        cout<<"ENTER YOUR CHOICE (1-4): ";
        cin>>choice;

        if (choice == 1) {
            if (patient_count >= MAX_LIMIT) {
                cout<<"System Full! Cannot add more patients."<<endl;
            } else {
                cout<<"\n--- ADDING PATIENT NUMBER "<<patient_count + 1<<" ---"<<endl;
                cin.ignore(); // Clears the buffer after choosing menu 1
                
                cout<<"ENTER PATIENT NAME: ";
                getline(cin, patient_name[patient_count]);
                
                cout<<"ENTER PATIENT GENDER: "; cin>>patient_gender[patient_count];
                cout<<"ENTER PATIENT AGE: "; cin>>patient_age[patient_count];
                cout<<"ENTER PATIENT CNIC: "; cin>>patient_CNIC[patient_count];
                
                cin.ignore(); // Clears the buffer after entering CNIC (integer input)
                cout<<"ENTER PATIENT ADDRESS: "; 
                getline(cin, patient_address[patient_count]); // Now safely accepts spaces!
                
                cout<<"ENTER PATIENT DISEASE: "; cin>>patient_disease[patient_count];
                cout<<"ENTER PATIENT CONTACT NUMBER: "; cin>>patient_contact_number[patient_count];
                cout<<"ENTER PATIENT STATUS: "; cin>>patient_status[patient_count];
                
                cout<<"Patient Added Successfully!"<<endl;
                patient_count++; // Increments count to store the next patient in the next index
            }
        }
        else if (choice == 2) {
            if (doctor_count >= MAX_LIMIT) {
                cout<<"System Full! Cannot add more doctors."<<endl;
            } else {
                cout<<"\n--- ADDING DOCTOR NUMBER "<<doctor_count + 1<<" ---"<<endl;
                cin.ignore(); // Clears the buffer after choosing menu 2
                
                cout<<"ENTER DOCTOR NAME: ";
                getline(cin, doctor_name[doctor_count]);
                
                cout<<"ENTER DOCTOR GENDER: "; cin>>doctor_gender[doctor_count];
                cout<<"ENTER DOCTOR AGE: "; cin>>doctor_age[doctor_count];
                cout<<"ENTER DOCTOR CNIC: "; cin>>doctor_CNIC[doctor_count];
                cout<<"ENTER DOCTOR CONTACT NUMBER: "; cin>>doctor_contact_number[doctor_count];
                
                cout<<"ENTER DOCTOR AVAILABILITY DAYS \nENTER 1 FOR: (MONDAY, TUESDAY, WEDNESDAY) \nENTER 2 FOR: (THURSDAY, FRIDAY, SATURDAY): ";
                cin>>doctor_availability_days[doctor_count];
                
                cin.ignore(); // Clears the buffer after entering availability days
                cout<<"ENTER DOCTOR SPECIALIZATION: ";
                getline(cin, doctor_specialization[doctor_count]); // Now safely accepts spaces like "Heart Specialist"!
                
                cout<<"Doctor Added Successfully!"<<endl;
                doctor_count++; // Increments count to store the next doctor in the next index
            }
        }
        else if (choice == 3) {
            cout<<"\n--- BOOK AN APPOINTMENT ---"<<endl;
            
            if (patient_count == 0 || doctor_count == 0) {
                cout<<"ERROR: Please register at least 1 Patient and 1 Doctor first!"<<endl;
                continue; // Redirects back to the main menu
            }

            int patient_token_number;
            int appointment_fees;
            string enter_patient_name;
            string doctor_name_for_appointment;
            string appointment_day;
            bool found = false;

            cin.ignore(); // Clears the buffer after choosing menu 3
            cout<<"ENTER PATIENT NAME: ";
            getline(cin, enter_patient_name);

            cout<<"ENTER DOCTOR NAME: ";
            getline(cin, doctor_name_for_appointment);

            // Loops look through registered entries only
            for(int j = 0; j < patient_count; j++) {
                if(enter_patient_name == patient_name[j]) {
                    for(int k = 0; k < doctor_count; k++) {
                        if(doctor_name_for_appointment == doctor_name[k]) {
                            cout<<"TOKEN NUMBER: "; cin>>patient_token_number;
                            cout<<"APPOINTMENT FEES: "; cin>>appointment_fees;
                            cout<<"APPOINTMENT DATE/DAY: "; cin>>appointment_day;
                            
                            cout<<"\n=== APPOINTMENT BOOKED SUCCESSFULLY ==="<<endl;
                            found = true;
                            break; 
                        }
                    }
                    if(found) break; // Exits the patient loop if appointment is successfully matched
                }
            }

            if(!found) {
                cout<<"ERROR: Patient or Doctor name is incorrect or not found in the system!"<<endl;
            }
        }
        else if (choice == 4) {
            cout<<"Exiting the system. Goodbye!"<<endl;
            break; // Breaks the infinite loop to terminate program execution safely
        }
        else {
            cout<<"Invalid choice! Please select a valid option between 1 and 4."<<endl;
        }
    }

    return 0;
}
