#include<iostream>
using namespace std;
int main()
{cout<<"=========================GROCERRY DISCOUNT============================="<<endl;
int products[5];
float discount_rate {};
float total_bill{};
 float discount_amount{};
 float final_bill;
 cout<<"enter the discount rate:";
 cin>>discount_rate;
 for(int i=0;i<5;i++){
    cout<<"enter the price of product:"<<(i+1)<<":";
    cin>>products[i];
    total_bill+=products[i];
    discount_amount=total_bill*(discount_rate/100);
final_bill=total_bill-discount_amount; 
 }
 cout<<"TOTAL BILL:  "<<total_bill<<endl;
 cout<<"discount_amount:  "<<discount_amount<<endl;
 cout<<"final_bill:  "<<final_bill<<endl;
return 0;
}
