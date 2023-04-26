#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this->data=data;
        this->next = NULL;
    }
};

//INSERTING A NODE(SINGLY LINKED LIST)
void InsertAtTail(node* & tail, int d){
    node* temp = new node(d);
    tail->next = temp;
    tail= tail->next;
}
void print(node* head){
    node* temp = head;
    while( temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//REMOVING DUPLICATES FROM SORTED LINKED LIST
node* RemoveDuplicates(node* head){
   //empty list
    if(head == NULL)
    return NULL;
    
    //non empty list
    node* curr = head;
    while(curr->next!=NULL){
        if( curr->data == curr->next->data){ //curr->next ko bhi NULL check karna padega varna error aa sakta hai
        node* next_next = curr->next->next;
        node* nodeToDelete = curr->next;
        delete(nodeToDelete);
        curr->next= next_next;
        }
        else{
        curr=curr->next; 
        }
    }
    return head;
}
int main(){
    node* node1 = new node(2);
    node* head = node1;
    node* tail = node1;
    print(head);

    InsertAtTail(tail, 3);
    print(head);
    InsertAtTail(tail, 3);
    print(head);
    InsertAtTail(tail, 4);
    print(head);
    InsertAtTail(tail, 4);
    print(head);
    InsertAtTail(tail, 5);
    print(head);

    cout<<"Duplicates Removed "<<endl; 
    RemoveDuplicates(head);
    print(head);

return 0;
}