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
//APPROACH 1-> DATA REPLACEMENT
node* sortList(node* &head){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    node* temp  = head;
    while( temp != NULL){
        //finding numbere of Os, 1s and 2s in linked list
        if(temp->data == 0)
        zeroCount++;
        else if(temp->data == 1)
        oneCount++;
        else if(temp->data == 2)
        twoCount++;

        temp = temp->next;
    }
    temp = head;
    while(temp !=NULL){
        if(zeroCount != 0){//checking whether 0 is present if it is then replacing the first node data with zero
            temp ->data = 0;
            zeroCount--; //after replacing decrease the count by 1
        }
        else if(oneCount != 0){
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
            temp->data =2;
            twoCount--;
        }
       temp = temp->next;
   }
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
