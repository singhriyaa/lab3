#include<iostream>
using namespace std;
int main()
{
double basic,hra,da,gross;
cout<<"enter basic pay";
cin>>basic;
if(basic<=10000)
{
hra=(20*basic)/100;
da=(80*basic)/100;
gross=basic+hra+da;
cout<<"gross salary="<<gross;
}
else if(basic<=20000) 
{
hra=(25*basic)/100;
da=(90*basic)/100;
gross=basic+hra+da;
cout<<"gross salary="<<gross;
}
else
{
hra=(30*basic)/100;
da=(95*basic)/100;
gross=basic+hra+da;
cout<<"gross salary="<<gross;
}
return 0;
}
