#include<iostream>
using namespace std;
class Deque{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    //constructor
    Deque(int size){
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }
    //A> PUSHING FROM FRONT
    void Push_Front(int element){
         if( ( front == 0 && rear == size - 1 ) || (rear == (front-1) % (size -1) )){
               cout<<"Queue is Empty"<<endl;
        }
         //case 2-> First element case
        if(front == -1){
            front = rear =0;
            arr[front]= element;
        }
        else if(front == 0 && rear != size -1 ){
            front = size-1;
            arr[front]= element;
        }
        else{//to maintail normal flow
            front --;
            arr[front] =element;
        }
    }

    //B> PUSHING FROM BACK
    void Push_back(int element){
        //case 1-> check whether full or not
         if( ( front == 0 && rear == size - 1 ) || (rear == front-1 % size -1)){
               cout<<"Queue is Empty"<<endl;
        }
        //case 2-> First element case
        if(front == -1){
            front = rear =0;
            arr[rear]= element;
            
        }
        //case 3->
        else if(rear == size -1 && front != 0){
            rear=0;
            arr[rear] = element;
        }
        else{//normal case
            rear ++;
            arr[rear] = element;
        }
    }

    //C> POP FROM FRONT
     void Pop_front(){
            //case 1-> empty queue
            if(front == -1)
            cout<<"Queue is Empty"<<endl;

            //case 2->one element front in the list
            if(front == rear){
             front = rear = -1;
            }
            else if(front == size -1){
                front = 0;
            }
            else{
                //normal case
                front ++;
            }
        }

     //D> POP FROM BACK
       void Pop_Back(){
         //case 1-> empty queue
            if(front == -1){
            cout<<"Queue is Empty"<<endl;
            }
            //case 2->one element front in the list
            if(front == rear){
             front = rear = -1;
            }

            else if(rear == 0){
                rear = size-1;//maintaing the cyclic flow
            }

            else{
                //normal flow
                rear --;
            }
         }

    int front_element(){
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }
    int rear_element(){
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

     bool isEmpty(){
        if(front == -1)
         return true;
        else
        return false;
     }
     bool isFull(){
        if(( front == 0 && rear == size - 1 ) || (rear == front-1 % size -1))
         return true;
        else
        return false;
     }

     
};

int main() {
    Deque dq(5);
    
    dq.Push_Front(2);
    dq.Push_Front(1);
    dq.Push_back(3);
    dq.Push_back(4);
    dq.Push_back(5);
    
    
    cout << "Front element: " << dq.front_element() << endl;

    dq.Pop_front();
    dq.Pop_Back();

    cout << "Front element: " << dq.front_element() << endl;

    while (!dq.isEmpty()) {
        cout << dq.front_element() << " ";
        dq.Pop_front();
    }

    return 0;
}
