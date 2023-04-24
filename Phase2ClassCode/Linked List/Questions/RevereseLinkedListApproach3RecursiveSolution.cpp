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

//Approach 3->Reverse Linked List(Recursive solution 2)
node* reverse(node* &head){
    //case of empty list or single node
    if(head==NULL || head->next== NULL){
        return head;
    }

    node* smallHead = reverse(head->next);//recursive call
    head->next->next= head;
    head->next = NULL;

    return smallHead;
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
    InsertAtTail(tail,21);
    print(head);
    
    cout<<"Reverse Linked List "<<endl;
    head=reverse(head);
    print(head);

    return 0;
}