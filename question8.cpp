#include<iostream>
using namespace std;
int main()
{
 char ch;
 int Uppercase, Lowercase;
 cout<< "enter alphabet";
 cin>>ch;
 Lowercase = (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
 Uppercase = (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
 if(Lowercase||Uppercase)
 cout<<ch<<"  is a vovel";
 else
 cout<<ch<<"  is consonant";
 return 0;
}
