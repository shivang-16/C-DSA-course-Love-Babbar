#include<iostream>
using namespace std;
int main(){
   
   /*
    int i=5;
   // int *p=&i;
   
   //neeche ki do line or upar ki ek line dono ka same matlab hai
   
    int *p=0;//->Null pointer
    p=&i;
    cout<<"Address "<<p<<endl;
    cout<<"Value "<<*p<<endl;
*/


/*
 //CASE->1
     int num=5;
     //copying num to another variable a
     int a=num;
     cout<<"Before " <<num <<endl;
     a++;//A ko ek age bda diya
     
     //since humne num ko a me copy kiya h isliye agar hum a ko +,-,*,/ kuch bhi karenge no num ko koi fark ni padega 
     cout<<"After "<<num<<endl;
     cout<<a<<endl;

     cout<<endl;

//CASE ->2
    int *p = &num;
    int b= *p;
    cout<<"Before " <<num <<endl;
    b++;
    cout<<"After "<< num <<endl;
    cout<< *p <<endl;
    cout<< b <<endl;

    cout<<endl;

//CASE ->3
    int *p2 = &num;
    cout<<"Before " <<num <<endl;
    //agar hum *p ko +,-,*,/ kuch bhi karenge to num ki value change ho jayegi because p is pointing to address 
    (*p)++;
    cout<<"After "<< num <<endl;
    cout<<*p <<endl;
*/

/*
//COPYING A POINTER
     int i=5;
     int *p=&i;

     //creating new pointer q and copying p to q
     int *q=p;

     cout<<"p -> "<<p<<"  "<<"q -> "<<q<<endl<<endl;
     cout<<"*p -> "<<*p<<"  "<<"*q -> "<<*q<<endl;
*/


//IMPORTANT CONCEPT
  
    int i=3;
    int *t =&i;
    //case->1
    *t=*t+1;
    cout<<*t<<endl;
    cout<<endl;    
    //case->2
    cout<<"Before t is "<<t<<endl;
    t=t+1;//4 byte aage bad jayega int k case m
    cout<<"After t is  "<<t<<endl;



    return 0;
}