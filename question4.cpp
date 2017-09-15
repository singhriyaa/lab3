#include<iostream>
using namespace std;
int main()
{
 int n1;
 cout<< "enter number";
 cin>>n1;
 if(n1%5==0 && n1%11==0)
   cout<<"number divisible by 5 and 11";
 else
   cout<<"number not divisible by 5 and 11";
 return 0;
}
