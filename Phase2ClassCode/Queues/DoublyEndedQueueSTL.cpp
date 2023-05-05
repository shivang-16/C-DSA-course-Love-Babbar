#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    //creating Doubly Ended Queue
    deque<int>d;

    d.push_front(3);
    d.push_front(4);
    d.push_back(5);
    d.push_back(6);
    d.push_back(1);
    //queue -> 4 3 5 6 1

    cout<<d.front()<<endl;//front se dekhne par 4 ans
    cout<<d.back()<<endl;//back se dekhne par 1 ans 

    d.pop_front();//4 ko hta diya
    d.pop_front();//3 ko hta diya
    cout<<"After 1 pop: "<<d.front()<<endl;

    d.pop_back();//1 ko hta diya
    cout<<"After 2 pop: "<<d.back()<<endl;

    d.pop_back();//6 ko hta diya  

    d.pop_front();//5 ko hta diya => become empty
    if(d.empty())
    cout<<"Empty Queue"<<endl;
    else
    cout<<"NOT Empty"<<endl;
}