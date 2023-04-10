//10. Create a Distance class having 2 instance variable feet and inches. Also create default 
//constructor and parameterized constructor takes 2 variables . Now overload () function call 
//operator that takes 3 arguments a , b and c and set feet = a + c + 5 and inches = a+b + 15.
#include<conio.h>
#include<iostream>
using namespace std;
class distance
{
   int f,i;
   public:
   distance ()
   {

   }
   distance(int f,int i):f(f),i(i)
   {

   }
   void display()
   {
    cout<<"feet= "<<f<<endl<<"inches= "<<i<<endl;
   }
   distance operator()(int x,int y,int z=0)
   {
    distance temp;
    temp.f=x+z+5;
    temp.i=x+y+15;
    return temp;

   }
};
int main()
{
    distance d1(2,4),d3;
    d3=d1(2,4);
    d3.display();
    getch();
    return 0;

}
