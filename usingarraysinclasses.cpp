#include<iostream>
using namespace std;

class shop{
    private:
    int itemid[100];
    int itemprice[100];
    int counter;
public:
void initcounter(){
    counter=0;}
void setprice();
void display();
};

void shop :: setprice(){
cout<<"enter the item-id of your item:"<<(counter+1)<<endl;
cin>>itemid[counter];
cout<<"enter the price of your item:"<<endl;
cin>>itemprice[counter];
counter++;
}

void shop :: display(){
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of item with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;

    }
    
}
int main(){
     shop dukaan;
    dukaan.initcounter();
    for(int n=0; n<4; n++){
        dukaan.setprice();
    }
    dukaan.setprice();
    dukaan.display();




}