#include<iostream>
using namespace std;

class complex{
int a;
int b;
  public:
  void setnum(int p1, int p2){
   a=p1;
   b=p2;
  }
  void addnum(complex obj1, complex obj2 ){
    a = obj1.a + obj2.a;
    b = obj1.b + obj2.b;
  }
  void printnum(){
    cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
  }
};
int main(){
complex c1, c2, c3;
c1.setnum(3,4);
c1.printnum();

c2.setnum(4,5);
c2.printnum();

c3.addnum(c1,c2);
c3.printnum();

}