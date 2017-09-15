#include<iostream>
using namespace std;
int main()
{
int week;
cout<<"enter week number";
cin>>week;
 if(week == 1)
    {
       cout<<week<<" Monday";
    }
    else if(week == 2)
    {
        cout<<week<<"Tuesday";
    }
    else if(week == 3)
    {
        cout<<week<<"Wednesday";
    }
    else if(week == 4)
    {
        cout<<week<<"Thursday";
    }
    else if(week == 5)
    {
        cout<<week<<"Friday";
    }
    else if(week == 6)
    {
        cout<<week<<"Saturday";
    }
    else if(week == 7)
    {
        cout<<week<<"Sunday";
    }
    else
      cout<<week<<" invalid input";
return 0;
}
