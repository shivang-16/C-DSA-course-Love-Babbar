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

//APPROACH 1-> CHECKING PALINDROMIC LINKED LIST

//palindrome array function
bool checkPalindrome( vector<int>& arr){
    int n = arr.size();
    int s = 0;
    int e= n-1;
    while(s<=e){
        if(arr[s++] != arr[e--])
        return false;

      
    }
    return true;
}
bool isPalindrome(node* head){
  //empty list case
    if(head == NULL)
    return true;
   
    //STEP 1->creating an array copying the data of the linked list in the array 
    vector<int>arr;
    node* temp = head;
    while(temp != NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    //STEP 2-> now write program to check palindrome array 
      return checkPalindrome(arr);
}
int main(){
    node* node1 = new node(1);
    node* head= node1;
    node* tail= node1;
    print(head);
    InsertAtTail(tail, 4);
    print(head);
    InsertAtTail(tail, 1);
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