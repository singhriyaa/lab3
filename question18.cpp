#include<iostream>
using namespace std;
int main()
{
int phy,chem,bio,mat,comp,total,percentage;
cout<<"mark for phy";
cin>>phy;
cout<<"mark for chem";
cin>>bio;
cout<<"mark for mat";
cin>>mat;
cout<<"mark for bio";
cin>>bio;
cout<<"mark for comp";
cin>>comp;
total=phy+chem+mat+bio+comp;
percentage=total/500*100;           
if(percentage>=90)
cout<<"grade A";
else if(percentage>=80)
cout<<"grade B";
else if(percentage>=70)
cout<<"grade C";
else if(percentage>=60)
cout<<"grade D";
else if(percentage>=40)
cout<<"grade E";
else
cout<<"grade F";
return 0;
}
