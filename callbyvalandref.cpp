#include<iostream>
using namespace std;

void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"the final values of a and b are: "<<x<<" & "<<y<<" respectively"<<endl;
    
}

// implies that x points a and y points b
// void swap(int* x, int *y) { 
//     int temp;
//  temp=*x;
//  *x=*y;
//  *y= temp;
// }

int main(){
    int a=4,b=3;
    cout<<"the initial values of a and b are: "<<a<<" & "<<b<<" respectively"<<endl;
    swap(a,b);
    // cout<<"the final values of a and b are: "<<a<<" & "<<b<<" respectively"<<endl;

}