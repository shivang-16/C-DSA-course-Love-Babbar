#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int>q;
    q.push(0);
    q.push(5);
    q.push(3);
    q.push(1);
    q.push(6);

//Appraoch -> Use of STACKS
     int k;
     cout<<"Enter the value of k by which you want to reverse element "<<endl;
     cin>>k;

     stack<int>s;

    //step 1-> Fetch 1st k elements from the queue and push into stack
    for(int i = 0; i< k; i++){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    
    //step 2-> now fetch elements from the stack and push into the queue
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }

    //step 3-> now fetch first n-k elements from the queue and push back
        //n= q.size()

       int t = q.size()- k;
       while(t--){
        int element = q.front();
        q.pop();
        q.push(element);
       } 

      //printing the element of the queue
      while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
      } 

     return 0; 
}