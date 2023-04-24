#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Human{
    public:
    string Name;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

//Multiple Inheritance
class Hybrid: public Animal, public Human{

};
int main(){
    Hybrid Creature;
    Creature.speak();
    Creature.bark();

    return 0;
}