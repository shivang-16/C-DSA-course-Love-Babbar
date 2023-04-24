#include<iostream>
using namespace std;
//Hierarchical Inheritance
class A{
    public:
    void func1(){
        cout<<"Inside function 1"<<endl;
    }
};
class B: public A{
    public:
    void func2(){
        cout<<"Inside function 2"<<endl;
    }
};
class C: public A{
     public:
    void func3(){
        cout<<"Inside function 3"<<endl;
    }
};
class E: public B{
     public:
    void func4(){
        cout<<"Inside function 4"<<endl;
    }
};
class F: public B{
     public:
    void func5(){
        cout<<"Inside function 5"<<endl;
    }
};
int main(){
     A object1;
     object1.func1();

     B object2;
     object2.func1();
     object2.func2();

     C object3;
     object3.func1();
     //object3.func2();  //ye galat because C has no connection with B class
     object3.func3();
}