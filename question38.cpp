#include<iostream>
using namespace std;
int main()
{
int num,orig,rev=0,digit;
cout<<"Enter a number : ";
cin>>num;
orig=num;
while(num!=0)
{
digit=num%10;
rev=(rev*10) + digit;
num=num/10;
}
if(rev==orig) 
{
cout<<"Palindrome";
}
else
{
cout<<"Not Palindrome";
}
return 0;
}
