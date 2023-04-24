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

     //destructor
     ~node(){
        int value = this->data;
        //code for memory free
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for data-> "<<value<<endl;
     }
};

//INSERTING A NEW NODE AT HEAD
void InsertAtHead(node* &head, int d){//we use pass by refrence because we dont want to create copy we want change in original linked list only
    //create a new node
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
//INSERTING A NEW NODE AT TAIL 
void InsertAtTail(node* &tail, int d){//we use pass by refrence because we dont want to create copy we want change in original linked list only
    //create a new node
    node *temp = new node(d);
    tail->next = temp;
    tail = tail->next;
}

//DELETING A NODE
void NodeToDelete(node* &head, int position){
    //Deleting starting node
    if(position == 1){
        node* temp = head;
        head= head->next;
        //and now free memory of starting node
        temp->next=NULL;
        delete temp;
    }
    else{
    //Code for Deleting and middle and last node
    node* curr= head;
    node* prev=NULL;

      //moving to middle node
    int count=1;
    while(count<position){
         prev = curr;
         curr = curr->next;
         count++;
    }
       ///now delete
       prev->next= curr->next;
       //now free memory
       curr->next=NULL;
       delete curr;
}
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
    //creating a node
    node* node1= new node(10);
    
   //head pointed to node1
    node* head = node1;
    //tail pointed to node1
    node* tail = node1;
    print(head);

    InsertAtHead(head, 12);
    print(head);

    InsertAtHead(head, 15);
    print(head);

  cout<<"head: "<< head->data <<endl;
  cout<<"tail: "<< tail->data <<endl;

//DELETING NODE
     NodeToDelete(head,3);
     print(head);

  cout<<"head: "<< head->data <<endl;
  cout<<"tail: "<< tail->data <<endl;


return 0;
}