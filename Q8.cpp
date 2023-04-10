//8. Create a Coordinate class for 3 variables x,y and z and overload comma operator such 
//that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and c3 are 
//objects of 3D coordinate class.
#include<conio.h>
#include<iostream>
using namespace std;
class coordinate
{
   int x,y,z;
   public:
   coordinate(int x,int y):x(x),y(y)
   {

   }
   coordinate()
   {

   }
   void display()
   {
    cout<<x<<"+"<<y<<"i"<<endl;
   }
   coordinate operator ,(coordinate c) 
   {
    coordinate temp;
    temp.x=c.x;
    temp.y=c.y;
    return temp;
   }
};
int main()
{
    coordinate c1(2,4),c2(4,7),c3;
    c3=(c1,c2);
    c3.display();
    getch();
    return 0;
}
