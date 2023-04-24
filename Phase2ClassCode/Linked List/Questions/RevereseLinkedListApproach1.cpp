#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data = data;
        this->next= NULL;
    }
};

void InsertAtTail(node* &tail, int d){
    //create a new node
    node *temp = new node(d);
    tail->next = temp;
    tail = tail->next;
}

//Approch 1->Reverse Linked List(Iterative Solution)  
node* ReverseLinkedList(node* &head){
    //case of empty list or single node
    if(head==NULL||head->next==NULL){
        return head;
    }
    node* prev=NULL;  
    node* curr= head;
    node* forward=NULL;
     
    while(curr != NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr= forward;
   }
   return prev;
}
void print(node* &head){//here we dont not use pass by refrence then there will be no change at all
    node* temp= head;
    while( temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* node1= new node(10);
    node* head= node1;
    node* tail= node1;
    print(head);
    
    InsertAtTail(tail,20);
    print(head);
    InsertAtTail(tail,30);
    print(head);
    InsertAtTail(tail,40);
    print(head);
    
    //we have to update head in main function
    cout<<"Reverse Linked list "<<endl;
    head = ReverseLinkedList(head);
    print(head);

    return 0;
}