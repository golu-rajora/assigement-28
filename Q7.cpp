//7. Create an Integer class and overload not operator for that class.
#include<conio.h>
#include<iostream>
using namespace std;
class integer
{
   int x;
   public:
   integer(int x):x(x)
   {

   }
   integer()
   {

   }
   void operator !(int &y)
   {
    cout<<"NOT operator overloading "<<endl;
     y=-x;     
   }
   void display()
   {
    cout<<"number is :-"<<x<<endl;
   }
};
int main()
{
    cout<<"enter a number=";
    int x,y;
    cin>>x;
    integer t1(x);
    t1.display();
    !x;
    integer t2(y);
    t2.display();
    getch();
    return 0;


}