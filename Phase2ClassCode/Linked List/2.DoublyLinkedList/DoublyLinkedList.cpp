#include<iostream>
using namespace std;
class node{
  public:
  int data;
  node* prev;
  node* next;

  //constructor
  node(int data){
    this->data = data;
    this->prev= NULL;
    this->next=NULL;
  }
};

//Traversing a linked list
void print (node* head){
    node* temp= head;
    int count=1;
    while(temp!=NULL){
        cout<<temp->data;
        temp= temp->next;
        count++;
    }
    cout<<endl;
}

//Length of linked list
int getLen(node* head){
    node* temp= head;
    int len=1;
    while(temp != NULL){
      len++;
      temp = temp->next;
    }
    return len;
}

int main(){
     node* node1= new node(10);
     node* head = node1;
     cout<<node1->data<<endl;
     cout<<"Length: "<<getLen(head)<<endl;
    return 0;
}