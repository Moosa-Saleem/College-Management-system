#include<iostream>
#include<string>
using namespace std;

void library_management_system(){
    const int max_limit=100;
    int book_id_number[max_limit];
    string book_name[max_limit];
    string book_author_name[max_limit];
    int book_quantity[max_limit];
    int book_count=0;
    int student_id[max_limit];
    string student_name[max_limit];
    int student_count=0;

    while(true){
        cout<<"======= LIBRARY MANAGEMENT SYSTEM ==========="<<endl;
        cout << "1. Add Book\n2. Add Student\n3. Search/Display Book\n4. Issue Book\n5. Return Book\n6. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin>>choice;

        if(choice==1){
            if(book_count < max_limit){
                cout<<"ENTER BOOK ID :";
                cin>>book_id_number[book_count];
                cout<<"ENTER BOOK NAME :";
                cin>>book_name[book_count];
                cout<<"ENTER BOOK AUTHOR NAME :";
                cin>>book_author_name[book_count];
                cout<<"ENTER BOOK QUANTITY :";
                cin>>book_quantity[book_count];
                
                book_count++; 
                cout<<" Total Books Types :"<<book_count<<endl;
                cout<<"*************************"<<endl;
            } else {
                cout<<"Library full!"<<endl;
            }
        }
        else if(choice==2){
            if(student_count < max_limit){
                cout<<"ENTER STUDENT NAME :";
                cin>>student_name[student_count];
                cout<<"ENTER ID :";
                cin>>student_id[student_count];
                
                student_count++; 
                cout<<"*************************"<<endl;
            } else {
                cout<<"Student list full!"<<endl;
            }
        }
        else if(choice==3){
            int book_ID;
            bool found=false;
            cout<<"ENTER BOOK ID :";
            cin>>book_ID;
            
            for(int k=0; k<book_count; k++){ 
                if(book_ID==book_id_number[k]){
                    cout<<"BOOK ID : "<<book_id_number[k]<<endl;
                    cout<<"BOOK NAME : "<<book_name[k]<<endl;
                    cout<<"BOOK AUTHOR NAME : "<<book_author_name[k]<<endl;
                    cout<<"BOOK QUANTITY : "<<book_quantity[k]<<endl;
                    cout<<"*************************"<<endl;
                    found=true;
                }
                if(found){break;}
            }
            if(!found){cout<<"INVALID BOOK ID"<<endl;}
        }
        else if(choice==4){ 
            int Book_id;
            string student_Name;
            bool Found = false;
            cout<<"ENTER BOOK ID :";
            cin>>Book_id;
            cout<<"ENTER STUDENT NAME :";
            cin>>student_Name;
            
            if(student_count==0 || book_count==0){
                cout<<"There must be data for at least one book and one student."<<endl;
            } else {
                for(int k=0; k<book_count; k++){
                    if(Book_id==book_id_number[k]){ 
                        for(int u=0; u<student_count; u++){
                            if(student_Name==student_name[u]){
                                if(book_quantity[k] > 0) {
                                    book_quantity[k]--; 
                                    cout<<"STUDENT ID: "<<student_id[u]<<endl;
                                    cout<<"BOOK NAME : "<<book_name[k]<<endl;
                                    cout<<"BOOK AUTHOR NAME : "<<book_author_name[k]<<endl;
                                    cout<<"TOTAL BOOKS LEFT IN STOCK : "<<book_quantity[k]<<endl;
                                    cout<<"***********************"<<endl;  
                                    Found = true;
                                } else {
                                    cout<<"Book Out of Stock!"<<endl;
                                    Found = true;
                                }
                            }
                        }
                    }
                }
                if(!Found) { cout<<"Book ID or Student Name not matched!"<<endl; }
            }
        }
        else if(choice==5){ 
            int Book_id;
            string student_Name;
            bool Found = false;
            cout<<"ENTER BOOK ID :";
            cin>>Book_id;
            cout<<"ENTER STUDENT NAME :";
            cin>>student_Name;
            
            for(int k=0; k<book_count; k++){
                if(Book_id==book_id_number[k]){ 
                    for(int u=0; u<student_count; u++){
                        if(student_Name==student_name[u]){
                            book_quantity[k]++; 
                            cout<<"STUDENT ID: "<<student_id[u]<<endl;
                            cout<<"BOOK NAME : "<<book_name[k]<<endl;
                            cout<<"BOOK AUTHOR NAME : "<<book_author_name[k]<<endl;
                            cout<<"TOTAL BOOKS NOW AVAILABLE : "<<book_quantity[k]<<endl;
                            cout<<"***********************"<<endl;  
                            Found = true;
                        }
                    }
                }
            }
            if(!Found) { cout<<"Invalid details for return!"<<endl; }
        }
        else if(choice==6){
            cout<<"************ THANKS FOR USING MY PROGRAM **********"<<endl;
            break; 
        }
        else{
            cout<<"--------------INVALID CHOICE----------------"<<endl;
        } 
    }
}

int main() {
    library_management_system();
    return 0;
}
