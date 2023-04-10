//2. Define a class Complex with appropriate instance variables and member functions. One 
//of the functions should be setData() to set the properties of the object. Make sure the 
//names of formal arguments are the same as names of instance variables.
#include<iostream>
#include<conio.h>
using namespace std;
class complex 
{
    int x,y;
    public:
    void set_data(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void display()
    {
        cout<<"complex number is:-";
        cout<<x<<"+"<<y<<"i"<<endl;
    }
};
int main()
{
    complex c;
    cout<<"enter complex number:-";
    int x,y;
    cin>>x>>y;
    c.set_data(x,y);
    c.display();
    getch();
    return 0;
}