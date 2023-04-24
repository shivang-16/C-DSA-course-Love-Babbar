#include<iostream>
using namespace std;
int main(){
    int i=5;
    int* p =&i;
    int** p2=&p;
    
    cout<<"1->Address of i: "<< &i <<endl;
    cout<<"2->Address of i: "<< p <<endl;
    cout<<"3->Address of i: "<< *p2 <<endl;//It will print the address which is stores in p(i.e address of i)
   
    cout<<"4->Value of i: "<< i <<endl;
    cout<<"5->Value of i: "<< *p <<endl;
    cout<<"6->Value of i: "<< **p2 <<endl;//It will print the value of i

    cout<<"7->Address of p "<< &p <<endl;
    cout<<"8->Address of p "<< p2 <<endl;
   
}