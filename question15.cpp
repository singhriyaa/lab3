#include <iostream>  
using namespace std;   
int main()
{  
int side1, side2, side3;
cout<<"enter side";
cin>>side1;
cout<<"enter side";  
cin>>side2;
cout<<"enter side";  
cin>>side3;    
if((side1 + side2 > side3)&&(side2 + side3 > side1) &&(side3 + side1 > side2))  
cout<<"It is a Valid Triangle";  
else  
cout<<"It is an invalid Triangle"; 
return 0;  
}
