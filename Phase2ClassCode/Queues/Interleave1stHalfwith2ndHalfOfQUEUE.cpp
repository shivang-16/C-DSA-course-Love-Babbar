#include<iostream>
#include<stack>
#include<queue>
using namespace std;

//APPROACH 1->
int main(){
    queue<int> q;
    queue<int> newQ;

    q.push(11);  q.push(12);  q.push(13);  q.push(14);  q.push(15);  q.push(16);  q.push(17);  q.push(18);
    
    
     int n = q.size();
     int mid = n/2;
    
    for(int i = 0; i < mid; i++) {
    /*here we can not direct write i<q.size()/2 in side for loop beacause the size of queue is changing inside the 
    loop as we are poping the element so it does not iterate correct no. of time so we have to initialize the
     size before*/
       
        newQ.push(q.front());
        q.pop();
    }


    while(!newQ.empty()){
        int value = newQ.front();
        newQ.pop();
        q.push(value);

        value=q.front();
        q.pop();
        q.push(value);
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
    return 0;
}


/*
//Approch 2-> Using stacks(not working recheck karna hai isko)
int main(){
    queue<int>q;
    stack<int>s;

    q.push(11);  q.push(12);  q.push(13);  q.push(14);  q.push(15);  q.push(16);  q.push(17);  q.push(18);
   
   int n= q.size();
   int mid = (n+1)/2;

//step 1-> pushing the 1st half into the stack
   for (int i = 0; i<mid; i++){
    s.push(q.front());
    q.pop();
   } //now queue looks like-> 15 16 17 18


//step 2-> now push into the queue from stack
    while(!s.empty()){
    q.push(s.top());
    s.pop();
    }//now queue looks like-> 15 16 17 18 14 13 12 11


//step 3->  pop first half of queue and push back             
    for(int i= 0; i< mid; i++){
        q.push(q.front());
        q.pop();
    }//now queue looks like-> 14 13 12 11 15 16 17 18


//step 4-> now again push first half of queue into the stack so that we can get original order while poping from stack
    for (int i = 0; i<mid; i++){
    s.push(q.front());
    q.pop();
}


//step 5-> interleave first and second half
       
       while(!q.empty()){
        int value = s.top();
        s.pop();
        q.push(value);

        value = q.front();
        q.pop();
        q.push(value);
       }

       while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
       }

     return 0; 
}*/
       
