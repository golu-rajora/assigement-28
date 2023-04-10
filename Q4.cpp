//4. Create a student class and overload new and delete operators as a member function of 
//the class.
#include<conio.h>
#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
class student
{
    string name;
    int age;
    public:
    student ()
    {

    }
    student(string name,int age):name(name),age(age)
    {
        cout<<"name:-"<<name<<endl;
        cout<<"age:-"<<age<<endl;
    }
    void* operator new(size_t size)
    {
        cout<<"memory create in bytes:-"<<size<<endl;
         void *p=malloc(size);
           return p;
    }
    void operator delete(void *p)
    {
        cout<<"memory is free";
        free(p);
    }
};
int main()
{
    student *p=new student("golu",20);
       delete p;
       getch();
       return 0;
}
