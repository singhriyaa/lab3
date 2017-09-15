#include<iostream>
using namespace std;
int main()
{
int month;
cout<<"enter month number";
cin>>month;
 if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
 cout<<" no. of days in month=31";
 else if (month==11||month==9||month==6||month==4)
  cout<<" no. of days in month=30";
 else if(month==2)
  cout<<" no. of days in month=29or28";
 else
  cout<<"invalid input";
return 0;
}
