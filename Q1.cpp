//1. Define a class Complex with appropriate instance variables and member functions. 
//Overload following operators
//a. << insertion operator
//b. >> extraction operator
#include<conio.h>
#include<iostream>
using namespace std;
class complex 
{
     int x,y;
     public:
     friend ostream& operator<<(ostream &os,complex &c)
     {
        cout<<"complex number is:-";
        cout<<c.x<<"+"<<c.y<<"i"<<endl;
        return cout;
     }
     friend istream& operator>>(istream &i,complex &c)
     {
        cout<<"enter complex number:- ";
        cin>>c.x>>c.y;
        return cin;
     }
};
int main()
{
    complex c1;
    cin>>c1;
    cout<<c1;
    getch();
    return 0;
}