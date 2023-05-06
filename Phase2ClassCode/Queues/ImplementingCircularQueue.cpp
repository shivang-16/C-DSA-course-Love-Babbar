#include<iostream>
using namespace std;

class CircularQueue{
    public:
    //data members
    int *arr;
    int front;
    int rear;
    int size;

    //constructor
    CircularQueue(int size){
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

 // Push/Enqueue a element in the queue
      void push(int element){
        //case 1-> if queue is full
        if( ( front == 0 && rear == size - 1 ) || (rear == (front -1) % (size -1) ) ){
            cout << "Queue is Full "<<endl;
        }
        //case 2-> first element 
        else if(front == -1){
            //inserting first element
            front = rear = 0;
            arr[rear] = element;
        }   

        //case 3->
        else if(rear == size - 1 && front != 0){
            rear = 0;
            arr[rear] = element;
        }     
        else{
            //normal case
            rear ++;
            arr[rear] = element;
        }
    }

 // Pop/Dequeue a element from the queue
      void pop(){
        //case 1-> if queue is empty
        if(front == -1)
        cout<<"Queue is Empty"<<endl;

        //case 2-> Single element in queue
        if(front == rear){
        front = rear = -1; //i.e after poping that single element queue become empty
        }
        else if(front == size -1){
        front =0;
        }
        else{//case 3-> Normal case
        front ++;
        }   
      }

 //Front element of queue
      int qfront(){
       return arr[front];
      }
};
int main(){
       CircularQueue cq(5);

       cq.push(1);
       cq.push(2);
       cq.push(3);
       cq.push(4);
       cq.push(5);
        //queue -> 1 2 3 4 5
       cout << cq.qfront() << endl; // should print 1
        
       cq.pop();
       cq.push(6);
        //queue -> 6 2 3 4 5
        //here front pointer is on 2 and rear pointer is on 6 since is an circular queue
       cout << cq.qfront() << endl; // should print 2
       
      
       cq.pop();
       cq.push(7);
        //queue -> 6 7 3 4 5
       cout << cq.qfront() << endl; // should print 3

       cq.pop();
       cq.push(8);
        //queue -> 6 7 8 4 5
       cout << cq.qfront() << endl; // should print 4

       cq.pop();
       cq.push(9);
        //queue -> 6 7 8 9 5
       cout << cq.qfront() << endl; // should print 5

       cq.pop();
       cq.push(10);
        //queue -> 6 7 8 9 10
        //now here front pointer moves to the first positon(i.e on 6) again since it is a circular queue and rear is on 10
       cout << cq.qfront() << endl; // should print 6

       cq.pop();
       cout << cq.qfront() << endl; // should print 7

}