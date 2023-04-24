#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data= data;
        this->next= NULL;
    }
};
//single linked list Insertion code
void InsertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail->next= temp;
    tail= tail->next;
}
void print(node* head){
    node* temp = head;
    while( temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

//CHECKING WHETHERE LINKEDLIST IS CIRCULAR OR NOT
bool isCircular(node* & head){
    //empty list case
    if(head == NULL){
        return true;
    }

    node* temp = head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==NULL)
    return false;
    if(temp==head)
    return true;
}

int main(){

    node* node1 = new node(2);
    node* head= node1;
    node* tail = node1;
    print( head);

    InsertAtTail(tail, 7);
    print(head);
    InsertAtTail(tail, 9);
    print(head);
    InsertAtTail(tail, 11);
    print(head);
    

    //Circular Or Not
    if(isCircular(head))
    cout<<"Linked List is Circular in Nature"<<endl;
    else
    cout<<"Not a Circular linked list"<<endl;


    return 0;
}
