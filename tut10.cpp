#include<iostream>
#include<string>
using namespace std;
int main()
{
cout<<"*********************************************************"<<endl;
cout<<"             ATM SIMULATION PROGRAM                      "<<endl;
cout<<"*********************************************************"<<endl;
int total_enteries;
cout<<"ENTER TOTAL ENTERIES :"<<endl;
cin>>total_enteries;
int pin[total_enteries];
string name[total_enteries];
int cash[total_enteries];
for(int i=0;i<total_enteries;i++){
    cout<<"ENTER  ACCOUNT PIN :"<<endl;
    cin>>pin[i];
    cout<<"ENTER  NAME :"<<endl;
cin>>name[i];
    cout<<" Enter INITIAL BALANCE FOR ACCOUNT :"<<endl;
    cin>>cash[i];
    cout<<"********************************************************"<<endl;
}cout<<"*********************************************************"<<endl;
cout<<"               Please enter your credentials to continue  " <<endl;              
cout<<"*********************************************************"<<endl;
int enter_pin;
cout<<"ENTER YOUR PIN :"<<endl;  
cin>>enter_pin;
 int user_current_index =0;
 bool found=false;
for(int j=0;j<total_enteries;j++){
    if(enter_pin==pin[j]){
          cout<<" ACCOUNT PIN :"<<pin[j]<<endl;
    cout<<"  NAME :"<<name[j]<<endl;
    cout<<"  INITIAL BALANCE FOR ACCOUNT :"<<cash[j]<<endl;
     user_current_index=j;
     found=true;
    break;
    }
    
}
if (found == false){
    cout<<"INVALID PIN"<<endl;
    return 0;
}
int choice;
cout<<"**************************************************"<<endl;
cout<<"ENTER 1 TO DEPOSIT CASH\nENTER 2 TO WITHDRAW CASH "<<endl;
cout<<"**************************************************"<<endl;
cin>>choice;
if(choice==1){
    int deposit_amount;
    cout<<"ENTER YOUR DEPOSIT AOMUNT :"<<endl;
    cin>>deposit_amount;
    cash[user_current_index] = cash[user_current_index] + deposit_amount;
cout<<"TOTAL AMOUNT AFTER DEPOSIT IS :"<< cash[user_current_index]<<endl;
} 
else if(choice == 2 ){
    int withdraw_amount;
    cout<<"ENTER THE WITH DRAW AMOUNT :"<<endl;
    cin>>withdraw_amount;
if (withdraw_amount <= cash[user_current_index]){
      cash[user_current_index]=cash[user_current_index] - withdraw_amount;
    cout<<"AMOUNT AFTER WITH DRAW :"<<cash[user_current_index]<<endl;
}
else{
    cout<<"INADEQUATE BALANCE "<<endl;
}

}
return 0;
}