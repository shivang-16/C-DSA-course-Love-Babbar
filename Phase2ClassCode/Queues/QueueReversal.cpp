#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
    queue<int> q;
    q.push(0);
    q.push(5);
    q.push(3);
    q.push(1);
    

    //Approach 1-> Use of Stacks
    stack<int>s;

    //pushing elements into stacks
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    //now poping the element from stack and pushing into the queue
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }

   
   //now printing the elements again
   cout<<"After reversal: "<<endl;
    while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
   }
return 0;
}

