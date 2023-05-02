#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data= data;
        this->next =NULL;
    }
};

      void InsertAtTail1(node* &tail1, int d){
    node* temp = new node(d);
    tail1->next= temp;
    tail1 = temp;
}
void InsertAtTail2(node* &tail2, int d){
    node* temp = new node(d);
    tail2->next= temp;
    tail2 = temp;
}
void print(node* head ){
    node* temp = head;
    while( temp != NULL){
        cout<< temp->data<< " ";
        temp = temp->next;
    }
    cout<<endl;
}

//ADDING TWO LINKED LIST
node* Addlist(node* &head){
    
}


int main(){
    node* node1 = new node(2);

    //printing 1st list
    cout<<"1st List"<<endl;
    node* head1= node1;
    node* tail1 = node1;
    print(head1);
    InsertAtTail1(tail1, 4);
    print(head1);
    InsertAtTail1(tail1, 3);
    print(head1);

    //printing 2nd list
    cout<<"2nd List"<<endl;
    node* node2 = new node(4);
    node* head2= node2;
    node* tail2 = node2;
    print(head2);
    InsertAtTail2(tail2, 8);
    print(head2);
    InsertAtTail2(tail2, 9);
    print(head2);
     
 
}