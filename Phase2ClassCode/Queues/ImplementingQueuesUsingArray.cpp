#include<iostream>
using namespace std;

class Queue{
    //data members
 public:
    int *arr;
    int qfront;
    int rear;
    int size;

    //constructor
    Queue(int size){
        this->size = size;
        qfront = 0;
        rear = 0;
        arr = new int[size];
    }

    //push operation(i.e enqueue a element into queue)
    void push(int element){
    if(rear == size){
        cout<<"queue is full"<<endl;
    }  
    else{
      arr[rear] = element;
      rear++;
    }
    }
    
    //pop operation(i.e dequeue the element from the queue)
    void pop(){
        if(qfront == rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            arr[qfront] = -1;
            qfront ++;
            if(qfront == rear){
                qfront = 0; 
                rear = 0;
            }
        }
        
    }

    //first element 
    int front(){
       if(qfront == rear){
       cout<<"queue is empty"<<endl;
       return -1;
       }
       else{
         return arr[qfront];
    }
    }

    //isEmpty
    bool isEmpty(){
        if(qfront == rear)
        return true;
        else
        return false;
    }

};
int main(){

    Queue q(4);

    q.push(4);
    q.push(2);
    q.push(5);
    q.push(3);

    cout<<q.front()<<endl;
    
    q.pop();
    cout<<q.front()<<endl;

     if(q.isEmpty())
    cout<<"Empty queue"<<endl;
    else
    cout<<"NOT Empty"<<endl;



    
}