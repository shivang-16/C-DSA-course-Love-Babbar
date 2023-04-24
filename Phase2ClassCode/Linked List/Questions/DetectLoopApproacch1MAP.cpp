#include<iostream>
#include<map>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data= data;
        this->next= NULL;
    }
};
//single linked list insertion code
void InsertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail->next= temp;
    tail= tail->next;
}
void print(node* head){
    node* temp = head;
    while( temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

//DETECT LOOP
bool detectLoop(node* head){
    if(head == NULL){
        return false;
    } 
    map<node* , bool>visited;
    node* temp = head;
    while(temp!=NULL){
        //cycle is present
        if(visited[temp]==true){
            cout<<"Loop present on element "<<temp->data<<endl;
            return true;
        }
        //if cycle not present then visited ko true mark karke aage bad jana h
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
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

  //checking for loop
    if(detectLoop(head))
    cout<<"Loop Present"<<endl;
    else
    cout<<"Loop not present"<<endl;

    
}