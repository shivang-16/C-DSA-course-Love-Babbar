#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this-> next = NULL;
    }
};
int main(){
    //dynamic allocate
    Node* node1= new Node(10);
    cout<< node1-> data<<endl;
    cout<< node1-> next<<endl;
}