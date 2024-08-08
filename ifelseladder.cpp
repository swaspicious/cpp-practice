#include<iostream>
using namespace std;

int main(){
    int kms;
    cout<<"What is the max distance you have run?"<<endl;
    cin>>kms;
    if((kms>=5)&&(kms<10)){
cout<<"you are on the way to pro!";
    }
    else if((kms>=10)&&(kms<21)){
        cout<<"you are a pro! prep for a half marathon.";
    }
    else if(kms>21){
        cout<<"kudos! prep for full marathons.";
    }
    else{
        cout<<"you are a beginner. be conisistent!";
    }

}