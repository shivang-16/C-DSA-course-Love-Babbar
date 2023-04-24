#include<iostream>
using namespace std;
int main(){

//Example->1;
    int num=5;
    //Adrress Operator -> &
    cout<<"Address of num is "<< &num<<endl;

    int *p1=&num;//->Declare pointer
    //*ptr num ki value print karega
    cout<<"Value is num "<< *p1 <<endl; 
    
    //now if do not use dereference operator(*) the adress of num will be printed
    cout<<"Adrress of num "<< p1 <<endl;

    //size of Num
    cout<<"Size of integer is "<<sizeof(num)<<endl;
    
    //Kisi bhi type ka datatype of pointer always store address so the size of pointer will always be same (generaly 8 bytes)
    cout<<"Size of pointer is "<<sizeof(p1)<<endl;
    
    cout<<endl;


/*
//BAD PRACTICE
 int *p; //->Declare pointer which is pointed to some garbage adrress(never do this instead we can intilise pointer with zero)
 cout<<*p<<endl;
*/


//Example->2
     double d= 4.3;
     double *p2=&d;

     //*ptr double ki value print karega
    cout<<"Value is double "<< *p2 <<endl; 
    
    //now if do not use dereference operator(*) the adress of double will be printed
    cout<<"Adrress of double "<< p2 <<endl;

    
    cout<<"Size of double is "<<sizeof(d)<<endl;
    cout<<"Size of pointer(double) is "<<sizeof(p2)<<endl;

}

