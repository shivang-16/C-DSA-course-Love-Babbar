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
//insterion of node
void InsertAtTail(node* &tail,int d){
    node* temp= new node(d);
    tail->next= temp;
    tail= tail->next;
}
void print(node* head){
    node* temp = head;
    while(temp !=  NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//SORT 0s, 1s, 2s in a LINKEDLIST
//APPROACH 1-> LIN 
void insertatlast(node* &tail, node* &curr){
    tail->next= curr;
    tail=curr;
}
node* sortList(node* &head){
    //creating dummy nodes
   
    /*The need for dummy nodes arises because we want to represent the head of each separate list as a node, even 
    though the list may be empty. This helps simplify the logic for appending nodes to the list, as we can just 
    append nodes using the insertatlast() function without having to check if the list is empty first.
    If we do not use dummy nodes, we would have to add extra code to handle the case when a separate list is empty*/
   
    node* zeroHead = new node(-1);
    node* zeroTail = zeroHead;//pointers representing the tail of the list
    node* oneHead = new node(-1);
    node* oneTail = oneHead;//pointers representing the tail of the list
    node* twoHead = new node(-1);
    node* twoTail = twoHead;//pointers representing the tail of the list
   
    //creating a separate list for 0s 1s and 2s
    node* curr = head;
    while(curr!=NULL){
        int value = curr->data;

        if(value == 0){//if data is 0 then append the 0s list at last of the zeroTail
            insertatlast(zeroTail, curr);
        }
        else if(value==1){
            insertatlast(oneTail, curr);
        }
        else if(value == 2){
             insertatlast(twoTail, curr);
    }
     curr = curr->next;
    }
    
//Now merging 3 sublist
     
     // if 1s list not empty
    if(oneHead->next != NULL){
          zeroTail->next = oneHead->next;
    }
    else{
        //if 1s list is empty
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

   
    //setup head
    head = zeroHead->next;

    //now deleting dummy node
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;

}
int main(){
    node* node1 = new node(1);
    node* head = node1;
    node* tail = node1;
    print(head);
    InsertAtTail(tail,0);
    print(head);
    InsertAtTail(tail,2);
    print(head);
    InsertAtTail(tail,2);
    print (head);
    InsertAtTail(tail,1);
    print(head);

   cout<<"list is sorted"<<endl;
    sortList(head);
    print(head);
    
}
