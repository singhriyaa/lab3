#include<iostream>
using namespace std;
int main()
{
 char x1;
 cout<< "enter charecter";
 cin>>x1;
 if((x1>='a' && x1<='z')||(x1>='A' && x1<='Z'))
   cout<<x1<<"is an alphabet ";
 else
   cout<<x1<<"not an alphabet";
 return 0;
}

