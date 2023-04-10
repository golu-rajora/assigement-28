//5. Create a student class and overload new and delete operators outside the class.
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
    void operator delete(void* p)
    {
        cout<<"memory is free"<<endl;
        free(p);
    }
};
    void* operator new(size_t size)
    {
        cout<<"memory create in bytes:-"<<size<<endl;
         void *p=malloc(size);
           return p;
    }
    void operator delete(void* p)
    {
        free(p);
        cout<<"memory is free";
    }
int main()
{
    student *p=new student("golu",20);
           delete p;
       float *r=new(float);
       delete []r;
       getch();
       return 0;
}