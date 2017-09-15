#include<iostream>
using namespace std;
int main()
{
int n,a,prod=1;
cout<<"enter number";
cin>>n;
while(n>0)
{
a=n%10;
n=n/10;
prod=prod*a;
}
cout<<"product of digits of a number:"<<prod<<endl;
return 0;
}

