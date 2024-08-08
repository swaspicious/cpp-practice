#include<iostream>
using namespace std;

int main(){
    float sg1, sg2;
    cout<<"enter the sg of 1st sem:\n";
    cin>>sg1;
    cout<<"enter the sg of 2nd sem:\n";
    cin>>sg2;

    float final, CG;
    final = (sg1+sg2)/2;
    CG = final;

    cout<<"your final cg of 1st year is:"<<final<<endl;
 cout<<"the roundoff (to the nearest integer) of your cgpa is:"<< (int)CG<<endl;
    cout<<"the size of your cgpa is:"<<sizeof(final)<<endl;
    cout<<"congrats! you're eligible for branch change!";
}