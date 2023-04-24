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

    //DESTRUCTOR
    ~node(){
        int value = this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
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
   //inserting at first position
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

//DELETING A NODE
void NodeToDelete(node* &head, int position){
   //deleting the starting node
   if(position==1){
    node* temp= head;
    temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;
    delete temp;
}
   //deleting any middle or last node
   node* curr= head;
   node* prev= NULL;

   int cnt=1;
   while(cnt<position){
    prev=curr;
    curr=curr->next;
    cnt++;
   }

   curr->prev=NULL;
   prev->next=curr->next;
   curr->next=NULL;
   delete curr;
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

     NodeToDelete(head,4 );
     print(head);

     cout<<"Head: "<<head->data<<endl;
     cout<<"Tail: "<<tail->data<<endl;
}
