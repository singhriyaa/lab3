#include<iostream>
#include<cmath>
using namespace std;
int main()
{
double a,b,c,root1,root2,dis,realpart,imaginarypart;
cout<<"enter coefficient";
cin>>a;
cout<<"enter coefficient";
cin>>b;
cout<<"enter coefficient";
cin>>c;
dis=b*b-4*a*c;
if(dis>0)
{
root1=(-b+sqrt(dis))/(2*a);
root2=(-b-sqrt(dis))/(2*a);
cout<<"root1="<<root1<<endl;
cout<<"root2="<<root2<<endl;
}
else if(dis==0)
{
root1=(-b+sqrt(dis))/(2*a);
cout<<"root1=root2="<<root1<<endl;
}
else
{
realpart=-b/(2*a);
imaginarypart=sqrt(-dis)/(2*a);
cout<<"root1="<<realpart<<"+"<<imaginarypart<<"i"<<endl;
cout<<"root2="<<realpart<<"-"<<imaginarypart<<"i"<<endl;
}
return 0;
}
