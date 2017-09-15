#include<iostream>
using namespace std;
int main()
{
 char x1;
 cout<< "enter charecter";
 cin>>x1;
 if(x1>='a' && x1<='z')
   cout<<x1<<" is lower case ";
 else
   cout<<x1<<" is upper case";
 return 0;
}
