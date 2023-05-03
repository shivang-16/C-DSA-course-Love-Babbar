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

node* reverse(node* &head){
    //empty list case
    if(head == NULL)
    return NULL;

    node* curr = head;
    node* prev = NULL;
    node* forward = NULL;
    while(curr != NULL){
       forward = curr->next;
       curr->next = prev;
       prev = curr;
       curr = forward;
    }
    return prev;
}
void InsertDigitAtTail(node* &head, node* &tail, int val){
  node* temp = new node(val);
   if(head ==NULL){
      head = temp;
      tail = temp;
      return;
     }
    else{ 
     tail->next = temp;
     tail = temp;
   }
}


node* Add(node* &head1, node* &head2){
    
     int carry= 0;
     node* ansHead =NULL;
     node* ansTail =NULL;
     //case1
    while( head1 != NULL && head2 != NULL){
      
        int sum = head1->data + head2->data + carry;
        int digit = sum%10;
        //create node and add in answer linked list
        InsertDigitAtTail(ansHead,ansTail, digit );
        carry = sum/10;
        head1 = head1->next;
        head2 = head2->next;
    }
      //case2
    while(head1 != NULL){
        int sum = carry + head1->data;
        int digit = sum%10;
        //create node and add in answer linked list
        InsertDigitAtTail(ansHead,ansTail, digit );       
         carry = sum/10;
         head2 = head2->next;
    }

      //case3
    while(head2 != NULL){
        int sum = carry + head2->data;
        int digit = sum%10;
        //create node and add in answer linked list
        InsertDigitAtTail(ansHead,ansTail, digit );
        carry = sum/10;
        head2 = head2->next;
    }

     //case4
    while(carry != 0){
        int sum = carry;
        int digit = sum%10;
        //create node and add in answer linked list
        InsertDigitAtTail(ansHead,ansTail, digit );
        carry = sum/10;
         }
         return ansHead;
}
node* AddList(node* &head1, node* &head2){
    
    //step 1-> Reversing both list (since we start adding numbers from left so we have to reverse both list)
    head1 = reverse(head1);
    head2 = reverse(head2);

    //step 2-> adding both list
    node* ans = Add( head1 , head2);

    //step 3-> reverse ans list
    ans = reverse(ans);
    
    return ans;
}

int main(){
    
    //printing 1st list
    node* node1 = new node(2);
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
    InsertAtTail2(tail2, 1);
    print(head2);

    cout<<"Sum: "; 
    head1= AddList(head1, head2);
    print(head1);
}