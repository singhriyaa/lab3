#include<iostream>
using namespace std;
int main()
{
int n,a,sum=0;
cout<<"enter number";
cin>>n;
while(n>0) {
a=n%10;
n=n/10;   
sum=sum + a;    
}
cout<<"sum of digits:"<<sum<<endl;
return 0;
}
