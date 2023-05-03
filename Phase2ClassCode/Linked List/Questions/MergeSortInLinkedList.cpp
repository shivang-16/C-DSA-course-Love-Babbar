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

//MERGE SORT IN LINKED LIST

//step1-> Finding mid of the linked list
node* getMid(node* head){
    
    node* slow= head;
    node* fast = head->next;

    while( fast != NULL && fast->next != NULL){
        fast = fast ->next->next;
        slow = slow->next;
    }
    return slow;
}
//step 2-> Merge two sorted linked list function 
node* merge( node* left, node* right){
    //if 1st list is empty
    if(left == NULL){
        return right;
    }
    //if 1st list is empty
    if(right == NULL){
        return left;
    }

    //creating dummy node
    node* ans = new node(-1);
    node* temp = ans;
   

    while( left != NULL && right != NULL){
        if(left->data < right->data){
            //adding left part after the dummy node
           temp->next = left;
           temp = left;
           left = left->next;
        }
        else{//adding right part after the dummy node
           temp->next = right;
           temp = right;
           right = right->next;
          }
        }
        while(left !=NULL){
           temp->next = left;
           temp = left;
           left = left->next;
        }
        while(right !=NULL){
           temp->next = right;
           temp = right;
           right = right->next;
        }

        ans = ans->next;
        return ans;
    }
   
//code for MERGE SORT(RECURSIVE SOLUTION)
node* mergeSortLL(node* head){
    //base case
    if(head ==NULL || head->next==NULL)
    return head;

    //break linked list in two parts
    node* mid = getMid(head);
    
    node* left = head;
    node* right = mid->next;
    mid->next =NULL;

    //recursive call
    left = mergeSortLL(left);
    right = mergeSortLL(right);
    
    //now merge both sorted list 
    node* ans = merge(left, right);
    
    return ans;

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

    //merge sort
    cout<<"Sorted list: ";
    head = mergeSortLL(head);
    print(head);
}