#include<iostream>
#include<stack>
using namespace std;

int main(){
    //creation of stack
     stack<int>s;

    //push element
     s.push(2);
     s.push(3);

    //pop element
      s.pop();  
    
    //peak element
    cout<<"Printing top element of stack "<< s.top()<<endl;
   
    //empty or not
    if(s.empty())
    cout<<"Stack is Empty"<<endl;
    else
    cout<<"Not empty"<<endl;

    //size of stack
    cout<<"Size of stack is: "<<s.size()<<endl;
 
   return 0;

}