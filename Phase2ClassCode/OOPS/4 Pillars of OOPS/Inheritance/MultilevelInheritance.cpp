#include<iostream>
using namespace std;
class Animal{
    public:
    string Breed;
    int Weight;

    public:
    void bark(){
        cout<<"Piyush is Barking"<<endl;
    }
    void setBreed(string str){
        this->Breed= str;
    }
    void setWeight(int n){
        this->Weight=n;
    }
};
class Dog: public Animal{
    public:
    int Age;
    void setAge(int a){
        this->Age=a;
    }
};
class GermanShepard: public Dog{

};

int main(){
    GermanShepard Piyush;
    cout<<endl;
    cout<<"Dog Name-> Piyush"<<endl;
    Piyush.setBreed("Landoori");
    Piyush.setWeight(120);
    Piyush.setAge(10);
    cout<<"Breed-> "<<Piyush.Breed<<endl;
    cout<<"Weight-> "<<Piyush.Weight<<endl;
    cout<<"Age-> "<<Piyush.Age<<endl;

    Piyush.bark();
    cout<<endl;
}
