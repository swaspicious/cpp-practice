#include<iostream>
using namespace std;

int main()
{
    int a=7;
    int* b;
    int** c;
    b=&a;
    cout<<"the value of a is: "<<a<<endl;
    cout<<"the address of a is: "<<b<<endl;
c=&b;
cout<<"the address of b is :"<<c<<endl;
cout<<"trying the dereference operator:"<<*c<<endl;
cout<<"trying the dereference operator again:"<<**c;
}