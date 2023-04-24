#include<iostream>
using namespace std;
class hero{
    public:
    int health;
    char level;
    //default consturctor
    hero(){
        cout<<"Simple constructor called"<<endl;
    }
    //parameterised constructor
    hero(int health, char level){
        this->health= health;
        this-> level = level;
    }

    //copy constructor is default but we can also create it ourself(as we create out copy constructor default copy constructor is deleted)
    hero(hero& temp){
        cout<<"copy constructor called"<<endl;
        this->health=temp.health;
        this->level= temp.level;
    }

    void print(){
        cout<<"Health "<<this->health<<endl;
        cout<<"Level "<<this->level<<endl;
    }
};
int main(){

    hero Jack(80,'A');
    Jack.print();

    //copy constructor
    hero Joe(Jack);//an inbuilt copy constructor is generated automatically
    Joe.print();


}