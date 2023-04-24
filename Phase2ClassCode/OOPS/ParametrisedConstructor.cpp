#include<iostream>
using namespace std;
class hero{
    public:
    int health; 
    char level;
    
    //Parameterised constructor(we can also make more than one parameterised constructor in a class)
    hero(int health, char level){
        this-> health= health;
        this-> level= level;
    }

    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }

};
int main(){
    //static creation
    hero Jack(70,'A');
    Jack.print();

   //dynamic creation
   hero *joe = new hero(80,'B');
   joe->print();
   cout<<"Address->"<< &joe<<endl;

    
}