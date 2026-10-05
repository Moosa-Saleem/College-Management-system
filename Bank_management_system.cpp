#include<iostream>
#include<string>
using namespace std;
int main()
{
cout<<"==============BANK MANAGEMENT SYSTEM==============="<<endl;
int total_enteries{};
cout<<"ENTER THE TOTAL NUMBER OF ENTERIES :";
cin>>total_enteries;
string department[total_enteries];
string name[total_enteries];
string salary[total_enteries];
string shift[total_enteries];
for(int i=0;i<total_enteries;i++){
    cout<<"ENTER DEPARTMENT :"<<endl;
    cin>>department[i];
    cout<<"ENTER EMPLOYEE NAME :"<<endl;
    cin>>name[i];
    cout<<"ENTER SALARY :"<<endl;
    cin>>salary[i];
cout<<"ENTER SHIFT :"<<endl;
    cin>>shift[i];  
    cout<<""<<endl;
    cout<<"**************************************"<<endl;  
}
cout<<""<<endl;
cout<<"******************************************"<<endl;
cout<<"               FIND STAFF RECORD                 "<<endl;
cout<<"******************************************"<<endl;
cout<<"ENTER DEPARTMENT TO FILTER EMPLOYEE : "<<endl;
string search_department{};
cin>>search_department;
bool found=false;
for(int j=0; j<total_enteries;j++){
if(search_department==department[j]){
    cout<<"NAME :"<<name[j]<<endl;
    cout<<"SALARY :"<<salary[j]<<endl;
    cout<<"SHIFT :"<<shift[j]<<endl;
found=true;}
}
if(found==false){
        cout<<"INVALID DEPARTMENT"<<endl;
    }

return 0;
}
