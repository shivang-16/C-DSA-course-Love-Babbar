#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
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

//MERGE TWO SORTED LINKED LIST
node* merge(node* head1, node* head2){
    //if 1st linked list is empty then return 2nd list
    if(head1 == NULL)
    return head2;
    //and if 2nd is empty then return 1st list
    if(head2==NULL)
    return head1;

    node* curr1 = head1;
    node* next1 = curr1->next;
    node* curr2 = head2;
    node* next2 = curr2->next;

   while(next1 != NULL && curr2 != NULL){
    if(curr2->data >= curr1->data && curr2->data <= head1->data){
        curr1->next = curr2;
        next2= curr2->next;
        curr2->next= next1;
        curr1 = curr2;
        curr2 = next2;
  }
     else{
        curr1= next1;
        next1 = next1->next;

        if(next1==NULL){
            curr1->next = curr2;
            return head1;
        }
     }
   }

     return head1; 

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
     
    //now merge both list
    cout<<"After merging"<<endl;
    merge(head1, head2) ;
    print(head1); 
}


