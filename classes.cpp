#include<iostream>
using namespace std;

class player{
    private:
    int salary, bonus, holidays;

    public:
    int goals, assists, awards;
    string name;

    void setdata(int a, int b, int c); //declaration
    void getdata(); //declaration
};

void player :: setdata(int a, int b, int c){
    salary=a;
    bonus=b;
    holidays=c;
}

void player :: getdata(){
    cout<<"the name of the player is :"<<name<<endl;
    cout<<"the salary of player is :"<<salary<< "M$" <<endl;
    cout<<"the bonus of player is:"<<bonus<<"M$"<<endl;
    cout<<"the holidays the player gets is:"<<holidays<<endl;
    cout<<"the goals of the player is:"<<goals<<endl;
    cout<<"the assists of the player is:"<<assists<<endl;
    cout<<"the no. of awards of the player is:"<<awards<<endl;
}

int main(){
    player salah; //creating an object
    salah.goals=36;
    salah.assists=17;
    salah.awards=2;
    salah.name = "Mo Salah";
    salah.setdata(110, 15, 24);
    salah.getdata();
    return 0;
}