#include<iostream>
//#include "classHero.cpp"
using namespace std;
class hero{
     
    //properties
     public:
     char name[100];
     int health;
     char level;
};

int main(){

    //creation of object
    hero Jack;

    Jack.health= 70;
    Jack.level  = 'A';
 
     //accessing properties/data members(we can access using "." operator)
      cout<<"Health is : "<< Jack.health<<endl;
      cout<<"Level is : "<< Jack.level<<endl;

    //cout<<"Size : "<<sizeof(Jack)<<endl;

}