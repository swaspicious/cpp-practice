#include<iostream>
using namespace std;

class student{
int roll;
static int count;

public:
void setdata(){
    cout<<"enter the roll of the student:"<<endl;
    cin>>roll;
    count++;
}
void getdata(){
    cout<<"the roll of student "<<count<<" is "<<roll<<endl;
}
};
int student :: count;
int main(){
student swastik, abhijeet, harshit;
swastik.setdata();
swastik.getdata();

harshit.setdata();
harshit.getdata();

abhijeet.setdata();
abhijeet.getdata();
}