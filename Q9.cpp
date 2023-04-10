//9. Create an Integer class that contains int x as an instance variable and overload
//casting int() operator that will type cast your Integer class object to int data type.
#include<conio.h>
#include<iostream>
using namespace std;
class integer
{
    int x;
    public:
    integer(int x)
    {
        this->x=x;
    }
    operator int ()
    {
        return x;
    }
};
  int main()
  {
    integer i1(10);
    int x=i1;
    cout<<"x= "<<x<<endl;
    getch();
    return 0;

  }