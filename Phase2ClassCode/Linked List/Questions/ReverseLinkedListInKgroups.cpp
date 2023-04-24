#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this->data = data;
        this->next =NULL;
    }
};
void InsertAtTail(node* &tail, int d){
    node* temp= new node(d);
    tail->next=temp;
    tail= tail->next;
}
void print (node* head){
    node* temp = head;
    while( temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//REVERSE LINKEDLIST IN K GROUPS
node* reverseInK(node* &head, int k){
    //base case
    if(head==NULL){
        return NULL;
    }
    //step 1-> Reverse first k nodes
    node* prev= NULL;
    node* curr= head;
    node* next= NULL;
    int count=0;

    while(curr!=NULL && count<k){
        next= curr->next;
        curr->next= prev;
        prev=curr;
        curr= next;
        count++;
    }
    //step 2-> Recursice call
    if(next != NULL){
        head->next= reverseInK(next, k);
    }
    //step 3-> Return head of reversed list
    return prev;
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
    InsertAtTail(tail, 15);
    print(head);
    InsertAtTail(tail, 16);
    print(head);
    cout<<endl;
    //Reverse in k Groups
    int k;
    cout<<"Give Value of k"<<endl;
    cin>>k;
    cout<<"Reverse Linked List in K groups "<<endl;
    head=reverseInK(head, k);
    print(head);
   
}