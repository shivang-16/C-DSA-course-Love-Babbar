#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

   //Constructor
    node(int data){
        this->data= data;
        this->next=NULL;
    }
};

//Circular linked list insertion code
void InsertNode(node* &tail, int element, int d){
    
    //case-1 Empty List
    if(tail==NULL){
        node* newNode= new node(d);
        tail=newNode;
        newNode->next = newNode;
    }
    else{
        //case-2 Non Empty List
        //assuming that element is present in the list
        node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        
        //when element found then curr is representing the element vali node
        node* temp= new node(d);
        temp->next = curr->next;
        curr->next=temp;
 }
}
//traversing and printing
void print(node* tail){
    node* temp= tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    while( tail != temp);
   cout<<endl;
}

//DETECT LOOP APPROACH 2-> FLOYD'S CYCLE DETECTION ALGORITHM
bool floydDetectLopp(node* head){
    if(head==NULL)
    return false;

    node* slow = head;
    node* fast= head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast = fast->next;
       }
       slow = slow->next;

       if(slow == fast){
        cout<<"Loop present at "<<slow->data<<endl;
        return true;
       }
    }
    return false;

}

int main(){
    node* tail = NULL;
    //inserting in empty list
    InsertNode(tail, 5, 3);
    print(tail);

    InsertNode(tail, 3, 5);
    print(tail);

    InsertNode(tail, 5, 7);
    print(tail);

    InsertNode(tail, 7, 9);
    print(tail);
    
    InsertNode(tail, 5, 10);
    print(tail); 
    cout<<endl;
    
    //calling floyd function
    if(floydDetectLopp(tail))
    cout<<"Loop is present"<<endl;
    else
    cout<<"Loop not present"<<endl;

 return 0;
}


 