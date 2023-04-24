#include<iostream>
using namespace std;
class A{
    public:
    void funcA(){
        cout<<"All Right"<<endl;
    }
};
class B{
    public:
    void funcA(){
        cout<<"Yeah"<<endl;
    }
};
class C: public A, public B{

};
int main(){
    C obj1;
    //using scope resolution operator to resolve ambiguity
    obj1.A::funcA();
    obj1.B::funcA();
  
}