#include<iostream>
using namespace std;
class hero{
    public:
    int health; 
    char level;
    //Default constructor
    hero(){
        cout<<"Constructor called"<<endl;
    }
};
int main(){
    cout<<"Hi"<<endl;
    //static creation
    hero Jack;
    cout<<"Jack"<<endl;
    
    //dynamic creation
    hero *Joe = new hero();

    //same constructor is called in both static and dynamic creation of object
}