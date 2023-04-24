#include<iostream>
using namespace std;
class hero{
    int health;
    public:
    char* name;
    char level;
    
    hero(){
        cout<<"simple constructor called"<<endl;
        name= new char[100];
    }
   
    void print(){
        cout<<endl;
        cout<<"[ Name :"<<this->name<<", ";
        cout<<"Health :"<<this->health<<", ";
        cout<<"Level :"<<this ->level<<" ]";
        cout<<endl<<endl;;
        
    }
     
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    

    void setHealth(int h){
       this-> health = h;
    }
    void setLevel(char ch){
       this-> level = ch;
    }
     void setName(char name[]){
        this->name = name;
    }

};
int main(){

    hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[8]= "Shivang";
    hero1.setName(name);
    hero1.print();

    //copy using default constructor
    hero hero2(hero1);
    hero2.print();

    //now changing first world of hero1 
    hero1.name[0]='G';
    hero1.print();
    
    //printing hero2 again
    hero2.print();
   
}