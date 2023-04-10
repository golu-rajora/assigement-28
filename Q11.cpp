//11. Create a class Marks that have one member variable marks and one member function 
//that will print marks. We know that we can access member functions using (.) dot operator. Now 
//you need to overload (->) arrow operator to access that function.
#include<iostream>
#include<conio.h>
using namespace std;
class marks
{
   int mark;
   public:
   marks(int x)
   {
    mark=x;
   }
   void print()
   {
    cout<<"marks= "<<mark<<endl;
   }
    marks* operator->()
    {
        return this;
    }
};
int main()
{
    marks m(50);
    m->print();
    getch();
    return 0;
}