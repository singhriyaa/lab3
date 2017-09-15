#include<iostream>
using namespace std;
int main()
{
int a1,a2,a3,sum;
cout<<"enter sidee1";
cin>>a1;
cout<<"enter side2";
cin>>a2;
cout<<"enter side3";
cin>>a3;
if(a1==a2==a3)
cout<< "equilateral triangle";
else if(a1==a2||a1==a3||a2==a3)
cout<<"isosceles triangle";
else
cout<<"scalene triangle";
return 0;
}
