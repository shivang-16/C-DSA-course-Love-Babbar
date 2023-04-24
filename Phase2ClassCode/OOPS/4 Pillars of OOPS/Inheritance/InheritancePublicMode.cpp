#include<iostream>
using namespace std;
//creating parent class
class Human{
    public:
    int height, weight, age;

    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }
    void setHeight(int h){
        this->height=h;
    }
    void setAge(int a){
        this -> age = a;
    }
};

//CREATING CHILD CLASS
class Male: public Human{
    public:
    string color;
    
    void sleep(){
        cout<<"Male sleeping"<<endl;
    }
    void setcolor(string clr){
    this->color= clr;
    }
};
int main(){
     //creating object
     Male Lucky;
     Lucky.setAge(18);
     Lucky.setWeight(65);
     Lucky.setHeight(165);
     Lucky.setcolor("Fair");
     cout<<Lucky.age<<endl;
     cout<<Lucky.weight<<endl;
     cout<<Lucky.height<<endl;
     cout<<Lucky.color<<endl;
     Lucky.sleep();

     return 0;
}