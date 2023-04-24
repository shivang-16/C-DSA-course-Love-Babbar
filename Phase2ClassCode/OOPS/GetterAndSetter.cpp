#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    char level;
    
   public:
    //using Getter
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    
    //using setter
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }

};
int main(){
    //creating object
    hero Jack;
    Jack.setHealth(70);
    cout<<"Health : "<<Jack.getHealth()<<endl;
 
    Jack.setLevel('A');
    cout<<"Health : "<<Jack.getLevel()<<endl;
    


}