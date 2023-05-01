#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void InsertAtTail(node* &tail, int d){
    node* temp = new node(d);
    if(tail == NULL){
        tail = temp;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}
void print(node* head){
    node* temp  = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//APPROACH 2-> CHECKING PALINDROMIC LINKED LIST

//step-1 middle of the linked list
node* middle(node* head){
    node* fast =head->next;
    node* slow =head;
    while(fast !=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow= slow->next;
    }
    return slow;
}
//step 2-> reverse of the linked list
node* reverse(node* head){
    node* curr= head;
    node* prev = NULL;
    node* forward =NULL;
    while(curr != NULL){
        forward= curr->next;
        curr->next= prev;
        prev= curr;
        curr = forward;
    }
    return prev;
}
bool isPalindrome(node* &head){
    //empty or single element case
    if(head == NULL || head->next == NULL){
        return true;
    }
    
    //step1 middle
    node* mid = middle(head);
   
    //step2 reverse half
    node* temp = mid->next;
    mid->next = reverse(temp) ;
    
    //step3 compare both halves
    node* head1= head;
    node* head2 = mid->next;
    while(head2 != NULL){
        if( head1 ->data != head2->data){
        return false;
        }

        head1 = head1->next;
        head2 = head2->next;
    }

    //step 4-> repeat step 2
     temp = mid->next;
     mid->next = reverse(temp) ;

    return true;
    
}

int main(){
    node* node1 = new node(1);
    node* head= node1;
    node* tail= node1;
    print(head);
    InsertAtTail(tail, 4);
    print(head);
    InsertAtTail(tail, 5);
    print(head);
    InsertAtTail(tail, 4);
    print(head);
    InsertAtTail(tail, 2);
    print(head);

    //calling palindromic linked list function
     if(isPalindrome(head))
     cout<<"Linked list is a palindrome"<<endl;
     else
     cout<<"NOT a palindrome"<<endl;
}