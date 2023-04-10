//3. Overload subscript operator [] that will be useful when we want to check for an index out 
//of bound.
#include<conio.h>
#include<iostream>
using namespace std;
class array
{
     int a[100];
     const int size=100;
     public:
     array()
     {

     }
     array(int n,int index)
     {
        if(index>size)
        {
            cout<<"array index out of bound"<<endl;
             exit(0);
        }
           a[index]=n;
     }
     int operator [](int index)
     {
         if(index>size)
        {
            cout<<"array index out of bound"<<endl;
            exit(0);
        }
        return a[index];
     }
};
int main()
{
    array a(2,105);
    cout<<a[105];
    getch();
    return 0;
}
