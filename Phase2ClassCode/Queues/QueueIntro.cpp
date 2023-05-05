#include<iostream>
#include<queue>
using namespace std;

int main(){
    //creating a queue
    queue<int>q;
    
    //inserting elements in queue
    q.push(4);
    q.push(2);
    q.push(5);
    q.push(3);
    
    cout<<"size of queue: "<<q.size()<<endl;
    cout<<"Front element of queue: "<<q.front()<<endl;
    
    q.pop();
    cout<<"size of queue after 1st pop "<<q.size()<<" and now front element of queue is "<<q.front()<<endl;
    
    q.pop();
     cout<<"size of queue after 2nd pop "<<q.size()<<" and now front element of queue is "<<q.front()<<endl;
    q.pop();
     cout<<"size of queue after 3rd pop "<<q.size()<<" and now front element of queue is "<<q.front()<<endl;
    
    q.pop();
     cout<<"size of queue after 3st pop "<<q.size()<<endl;
  
    if(q.empty())
    cout<<"Empty queue"<<endl;
    else
    cout<<"NOT Empty"<<endl;
  




    return 0;
}