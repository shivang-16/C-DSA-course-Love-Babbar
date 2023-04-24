#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this->data= data;
        this->next= NULL;
    }
};
//Inserting a node
void InsertAtTail(node* &tail, int d){
    //creating a new node
    node* temp= new node(d);
    tail->next= temp;
    tail = tail->next;
}
void print(node* head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//Approach 2->Reverse Linked List(Recursive Solution 1)
void reverse(node* &head, node* curr, node* prev){
      //base case
      if(curr==NULL){
        head=prev;
        return;
      }
      node* forward=curr->next;
      //recursive call
      reverse(head, forward, curr);
      curr->next=prev;
}

int main(){
    node* node1= new node(10);
    node* head= node1;
    node* tail= node1;
    print(head);
    
    InsertAtTail(tail, 15);
    print(head);
    InsertAtTail(tail, 20);
    print(head);
    InsertAtTail(tail,28);
    print(head);
    
    cout<<"Reverse Linked List "<<endl;
    node* curr= head;
    node* prev=NULL;
    reverse(head,curr, prev);
    print(head);

    return 0;
}