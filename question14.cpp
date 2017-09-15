#include<iostream>
using namespace std;
int main()
{
int a1,a2,a3,sum;
cout<<"enter angle1";
cin>>a1;
cout<<"enter angle2";
cin>>a2;
cout<<"enter angle3";
cin>>a3;
sum=a1+a2+a3;
if(sum==180)
 cout<<"valid triangle";
else
 cout<<" triangle not possible";
return 0;
}
