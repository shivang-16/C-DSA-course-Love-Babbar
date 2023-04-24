#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    //constructor
    node(int data){
        this->data = data;
        this->prev =NULL;
        this->next= NULL;
    }
};
//Traversing a linked list
void print (node* head){
    node* temp= head;
    int count=1;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
        count++;
    }
    cout<<endl;
}

//Inserting Node at head
void InsertAtHead(node* &head, int d){
    //creating a new node
    node* temp= new node(d);
 
    temp->next= head;
    head->prev= temp;
    head= temp;
}
//Inserting Node at tail
void InsertAtTail(node* & tail, int d){
    //creating a new node
    node* temp= new node(d);

    temp->prev= tail;
    tail->next= temp;
    tail= temp;
}

//Inserting node at any position
void InsertAtPosition(node* &head, node* &tail,int position, int d){
    if(position==1){
        InsertAtHead(head, d);
        return;
    }

    node* temp= head;
    int count=1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }

    //inserting at last positon
    if(temp-> next == NULL){
        InsertAtTail(tail,d);
        return;
    }
    node* nodeToInsert = new node(d);
    nodeToInsert->next= temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}
int main(){
     node* node1= new node(40);
     node* head= node1;
     node* tail= node1;
     print(head);

     InsertAtHead(head,11);
     print(head);

     InsertAtTail(tail,29 );
     print(head);

     InsertAtPosition(head, tail, 4 , 10);
     print(head);

     cout<<"Head: "<<head->data<<endl;
     cout<<"Tail: "<<tail->data<<endl;
}