#include<iostream>
using namespace std;
int main()
{
int n,d,first;
cout<< "enter number";
cin>>n;
d=n%10;
first=n;
while(first>=10)
{
first=first/10;
}
cout<<first<<"+"<<d<<"="<<first+d<<endl;
return 0;
}

