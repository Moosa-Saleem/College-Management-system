#include<iostream>
#include<iomanip>
using namespace std;
int main()
{cout<<setw(5)<<setfill('=')<<""<<"NUMBER GUESSING GAME"<<setw(5)<<""<<endl;
int hidden_numbers[]={67,90,55,78,89};
int guess_number;
cout<<"GUESS ANY NUMBER :";
cin>>guess_number;
bool found= false;
for(int i=0;i < 5;i++){
    if(guess_number==hidden_numbers[i]){
        cout<<"==================CONGRATULATION YOU FIND THE HIDDEN NUMBER==============================="<<endl;
        found=true;
        break;
    }
}if(!found){
        cout<<"=============SORRY YOU COULDN'T FIND THE HIDDEN NUMBER============"<<endl;
       
    }
return 0;
}
