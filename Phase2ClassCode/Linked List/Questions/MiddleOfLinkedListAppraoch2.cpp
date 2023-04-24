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

//Approah 2->MIDDLE OF LINKED LIST
node* middleOfLinkedList(node* head){
    //empty list or 1 node condition
    if(head== NULL || head->next==NULL){
        return head;
    }
    //2 node condition
    if( head->next->next == NULL){
        return head->next;
    }

    node* slow = head;
    node* fast = head->next;

    while(fast!=NULL){
        fast= fast->next;
        if(fast!=NULL){
            fast= fast->next;
        }
        slow=slow->next;
    }
    return slow;
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
    InsertAtTail(tail, 17);
    print(head);
    InsertAtTail(tail, 18);
    print(head);
      
    node* middleNode=middleOfLinkedList(head);
    cout<<"Middle node data -> "<<middleNode->data<<endl;
    return 0;
}
