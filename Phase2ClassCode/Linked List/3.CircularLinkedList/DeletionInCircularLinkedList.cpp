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

    //Destructor
    ~node(){
        int value= this->data;
        if(this->next != NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory free for node with data "<<value<<endl;
    }
};
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


//DELETION OF NODE
void DeleteNode(node* tail, int value){
    //case1 -> empty list
    if(tail==NULL){
        cout<<"List is empty, please check again"<<endl;
        return;
    }
    else{
        //case2-> Non empty
        //assuming that "value" is present in the linked list
        node* prev= tail;
        node* curr= prev->next;
        while(curr->data != value){
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;
        //if 1 node linked list
        if(curr==prev){
            tail=NULL;
        }
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}


//traversing and printing
void print(node* tail){
    node* temp= tail;
    
    //for empty list
    if(tail==NULL){
        cout<<"List is empty "<<endl;
        return;
    }

    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    while( tail != temp);
   cout<<endl;
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
    

//deleting a node
    DeleteNode(tail, 5);
    print(tail);
    
    return 0;
}


 