#include<iostream>
#include<string>
using namespace std;
void plain_seat_reservation(){
   char A='X',B='X',C='X',D='X',E='X',F='X',G='X',H='X',I='X',J='X',K='X',L='X';
   const int max_limit=100;
   string passanger_name[max_limit];
   long long passanger_id[max_limit];
   long long passanger_contact_number[max_limit];
    int passanger_age[max_limit];
    int passanger_count=0;
    while(true){
    cout<<"============ PLAIN SEAT RESERVATION PROGRAM =============="<<endl;
    cout<<"ENTER 1 TO ENTER PASSANGER INFORMATION \n ENTER 2 TO CHECK AVAILABLE SEATS \n ENTER 3 TO RESERVE SEAT \n ENTER 4 TO CANCEL RESERVE SEAT \n ENTER 5 TO EXIT THE SYSTEM :: ";
   int choice;
   cin>>choice;
   if(choice==1){
    if(passanger_count<max_limit){
        cout<<"ENTER PASSANGER NAME :"; cin>>passanger_name[passanger_count];
        cout<<"ENTER PASSANGER ID :"; cin>>passanger_id[passanger_count];
        cout<<"ENTER PASSANGER AGE :"; cin>>passanger_age[passanger_count];
        cout<<"ENTER PASSANGER CONTACT NUMBER :"; cin>>passanger_contact_number[passanger_count];
        passanger_count++;
      cout<<"TOTAL PASSANGERS :" << passanger_count << endl;
        cout<<"***********************************************************************"<<endl;

    }
   }
else if(choice==2){
    cout<<" SEATS ROW1 :(A,B,C,D) ; ROW2 :(E,F,G,H);ROW3 :(I,J,K,L)"<<endl;
    cout<<"ROW1 :"<<A<<","<<B<<","<<C<<","<<D<<endl;
    cout<<"ROW1 :"<<E<<","<<F<<","<<G<<","<<H<<endl;
    cout<<"ROW1 :"<<I<<","<<J<<","<<K<<","<<L<<endl;
    cout<<"******************************"<<endl;
    cout<<"X MEAN EMPTY SEATS and B MEAN BOOKED SEATS"<<endl;

}
else if(choice==3){
    int Passanger_id;
    cout<<"ENTER PASSANGER ID:";cin>>Passanger_id;
       if(passanger_count==0){cout<<"FIRST YOU HAVE TO ENTER ATLEAST ONE PASSANGER  INFORMATIOM";}
    for(int i=0;i<passanger_count;i++){
    if(Passanger_id==passanger_id[i]){
         cout<<"SELECT THE SEAT  ROW1 :(A,B,C,D) ; ROW2 :(E,F,G,H);ROW3 :(I,J,K,L):"<<endl;
        cout<<"SELECT SEAT:"<<endl;
        char select_seat;
        cin>>select_seat;
        if(select_seat=='A'&&A=='X')A='B';
        else if(select_seat=='B'&&B=='X')B='B';
        else if(select_seat=='C'&&C=='X')C='B';
        else if(select_seat=='D'&&D=='X')D='B';
        else if(select_seat=='E'&&E=='X')E='B';
        else if(select_seat=='F'&&F=='X')F='B';
        else if(select_seat=='G'&&G=='X')G='B';
        else if(select_seat=='H'&&H=='X')H='B';
        else if(select_seat=='I'&&I=='X')I='B';
        else if(select_seat=='J'&&J=='X')J='B';
        else if(select_seat=='K'&&K=='X')K='B';
        else if(select_seat=='L'&&L=='X')L='B';
         else{cout<<"SEAT ALREADY BOOKED OR INVALID SEAT SELECTION!"<<endl;}
        cout<<"PASSAGER NAME :"<<passanger_name[i]<<endl;
        cout<<"PASSAGER AGE :"<<passanger_age[i]<<endl;
        cout<<"PASSAGER ID :"<<passanger_id[i]<<endl;
        cout<<"PASSAGER CONTACT NUMBER :"<<passanger_contact_number[i]<<endl;
        cout<<"PASSAGER SEAT:"<<select_seat<<endl;    
    }
}
} 
else if(choice==4){
    cout<<"HERE WE ARE GOING TO CANCEL YOUR SEAT"<<endl;
    long long Passanger_ID;
    cout<<"ENTER PASSAGER ID :";cin>>Passanger_ID;
    for(int i=0;i<passanger_count;i++){
        if(Passanger_ID==passanger_id[i]){
    char enter_seat;
    cout<<" ENTER YOUR SEAT :";cin>>enter_seat;
    if(enter_seat=='A'&&A=='B')A='X';
        else if(enter_seat=='B'&&B=='B')B='X';
        else if(enter_seat=='C'&&C=='B')C='X';
        else if(enter_seat=='D'&&D=='B')D='X';
        else if(enter_seat=='E'&&E=='B')E='X';
        else if(enter_seat=='F'&&F=='B')F='X';
        else if(enter_seat=='G'&&G=='B')G='X';
        else if(enter_seat=='H'&&H=='B')H='X';
        else if(enter_seat=='I'&&I=='B')I='X';
        else if(enter_seat=='J'&&J=='B')J='X';
        else if(enter_seat=='K'&&K=='B')K='X';
        else if(enter_seat=='L'&&L=='B')L='X';
        else{cout<<"INVALID SEAT "<<endl;}
        cout<<"PASSANGER NAME :"<<passanger_name[i];
        cout<<"YOUR SEAT HAS BEEN CANCELED"<<endl;
}}}
else if(choice==5){cout<<"***********THANKS FOR USING THIS SYSTEM************"<<endl;
break;}
else {
    cout<<"INVALID CHOICE! PLEASE ENTER A NUMBER BETWEEN 1 AND 5."<<endl;
  
}
}
}
int main()
{
    plain_seat_reservation();

return 0;
}