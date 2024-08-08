#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"insert any number to get its multiplication table"<<endl;
    cin>>n;

    int i=1;
    int mult;
    cout<<"the multiplication table is:"<<endl;
    do{
    
      mult = n * i;
        // cout<<mult<<endl;
        cout<<n<<" * "<<i<<" = "<<mult<<endl;
        i++;
    }
    while(i<11);
}