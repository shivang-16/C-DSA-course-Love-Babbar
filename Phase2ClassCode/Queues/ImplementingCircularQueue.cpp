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
    
};