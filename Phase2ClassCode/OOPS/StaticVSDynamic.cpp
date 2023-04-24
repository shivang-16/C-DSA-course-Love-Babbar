#include<iostream>
using namespace std;

class hero{
     
    //properties
     public:
     char name[100];
     int health;
     char level;
};

int main(){

    //Stattically allocated creation of object
    hero Jack;
    Jack.health= 70;
    Jack.level  = 'A';
    cout<<"Health is : "<< Jack.health<<endl;
    cout<<"Level is : "<< Jack.level<<endl;

     //Dynamic allocation of object
     hero *Joe = new hero;
     Joe->health= 70;
     Joe->level= 'A ';
     cout<<"Health "<< (*Joe).health<<endl;
     cout<<"Level "<< (*Joe).level<<endl;

      //an alternate way to print
     cout<<"Health "<< Joe->health<<endl;
     cout<<"Level "<< Joe->level<<endl;


}