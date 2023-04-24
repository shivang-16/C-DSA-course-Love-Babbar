#include<iostream>
using namespace std;
//Hybrid Inheritance

//Below code is combination of Single and Hierarchical Inheritance
class A{
    public:
    void funcA(){
        cout<<"All Right"<<endl;
    }
};
class D{
    public:
    void funcD(){
        cout<<"Yeah"<<endl;
    }
};

class B: public A{

};
class C: public A, public D{

};
int main(){
    B obj1;
    obj1.funcA();

    C obj2;
    obj2.funcA();
    obj2.funcD();
}