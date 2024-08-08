#include<iostream>
using namespace std;

typedef struct mancity{
    int jerseynum;
    char position;
    float salary; //in mpa
}mc;

int main()
{ 
    struct mancity foden;
    struct mancity KDB;
    mc haaland;
     mc rodri;

    foden.jerseynum=47;
    foden.position='F';
    foden.salary=120.5;
    cout<<"Phil foden's jersey number is:"<<foden.jerseynum<<endl;
    cout<<"Phil foden's positon is:"<<foden.position<<endl;
    cout<<"Phil foden's salary (in MPA) is:"<<foden.salary<<endl;

    rodri.position='M';
    rodri.jerseynum=16;
    rodri.salary=110.8;
    cout<<"Rodri's jersey number is:"<<rodri.jerseynum<<endl;
    cout<<"Rodri's positon is:"<<rodri.position<<endl;
    cout<<"Rodri's salary (in MPA) is:"<<rodri.salary<<endl;

}