#include <stdio.h>
#include <iostream>
using namespace std;

int main ()
{ 
int grd;
    cout << "please enter your Grades ";
    cin >> grd ;

    if (grd >=86)
    {
        cout<<"You got A";
        cout <<"Congrats\n";
    }
    else if  (grd>=72)
    {
        cout << "You got B\n";
    
    }
    else if (grd >= 60)
    {
        cout<<" You got C";
    
    }
    else if (grd >= 50)
    {
        cout<<"You got D";
    }
    else if (grd < 50)
    {
        cout<<" You Failed!";
    }
    return 0;
}