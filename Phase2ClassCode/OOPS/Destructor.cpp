#include<iostream>
using namespace std;
class hero{
    public:
    int health; 
    char level;
    //Desstructor
    ~hero(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){
  
   //static creation
    hero Jack;//for static allocated object destructor is called automatically
   
    
    //dynamic creation
    hero *Joe = new hero();
    delete Joe;//for dynamic allocated object we have to called destructor manually
}