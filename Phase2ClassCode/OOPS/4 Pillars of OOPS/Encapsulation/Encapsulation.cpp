#include<iostream>
using namespace std;
class student{
     private:
     //data members
     string name;
     int age;
     int height;

     public:
     //function
     int getAge(){
        return this->age;
     }
};
int main(){
    student first;
    cout<<"All Ok"<<endl;
}
