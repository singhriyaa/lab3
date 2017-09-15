#include<iostream>
using namespace std;
int main()
{
 float n1,n2,n3,max;
 cout<< "enter number1";
 cin>>n1;
 cout<< "enter number2";
 cin>>n2;
 cout<< "enter number3";
 cin>>n3;
 if(n1>=n2 && n1>=n3) 
    max=n1;
 if(n2>=n1 && n2>=n3)
    max=n2;
 else
    max=n3;
 cout<<"maximum no:"<<n3;
 return 0;
}
