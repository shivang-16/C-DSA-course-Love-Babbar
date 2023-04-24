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

    //private member function to get length of linked list
    int getLength(){
        node* temp= this;
        int count=0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
};

void InsertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail->next= temp;
    tail = tail->next;
}

void print(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
   }
   cout<<endl;
}

//Approah 1->MIDDLE OF LINKED LIST
void middleOfLinkedList(node* head){
    node* temp = head;
    int len= head->getLength();
    int middle = (len/2) +1;
    for(int i=1; i<middle; i++){
        temp = temp->next;
    }
    //both for even and odd
    cout<<"Middle node positon is "<<middle<<" with data -> "<< temp->data <<endl;;
   
}
int main(){
    node* node1= new node(5);
    node* head= node1;
    node* tail= node1;
    print(head);
    InsertAtTail(tail, 7);
    print(head);
    InsertAtTail(tail, 9);
    print(head);
    InsertAtTail(tail, 11);
    print(head);
    InsertAtTail(tail, 15);
    print(head);
    InsertAtTail(tail, 16);
    print(head);

   cout<<"Length of Linked List -> "<<head->getLength()<<endl;
    
    middleOfLinkedList(head);
    return 0;
}
