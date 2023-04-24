#include<iostream>
#include<map>
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
//traversing and printing
void print(node* tail){
    node* temp= tail;
    
     /*cout<< tail->data<<" ";
      
       while(tail->next!=temp){ //there is a problem in while loop...according to the condition it can not print single node so we have to print it separately ..which we have write above 
        cout<<tail -> data<<" ";
         tail= tail->next;
     }*/
  
    
    //an alternative for above code is do while loop done below

    do{//do while loop m do wala code atlest ek bar to chlega hi chalega phir condition check hogi ...isme pahele do hoga then while condition check hogi then phir do hoga
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    while( tail != temp);
   cout<<endl;
}

/********************************************************************************************************************/
//Q->CHECKING WHETHERE LINKEDLIST IS CIRCULAR OR NOT
bool isCircular(node* & head){
    //empty list case
    if(head == NULL){
        return true;
    }

    node* temp = head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==NULL)
    return false;
    if(temp==head)
    return true;
}
/*********************************************************************************************************************/

/*********************************************************************************************************************/
//Q->DETECT LOOP APPROACH -1 MAP METHOD
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
/*********************************************************************************************************************/


/*REMOVING LOOP CODE STARTS FROM HERE **********************************************************************************/

//STEP-1 FLOYD'S LOOP DETECTION ALGORITHM APPRAOCH 2 FOR DETECTION LOOP
node* floydDetect(node* head){
    if(head==NULL)
    return NULL;

    node* slow=head;
    node* fast=head;
    while( slow != NULL && fast != NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow = slow->next;

        if(slow == fast){
        return slow;
    }
    }
    return NULL;
}

//STEP 2-> FINDING STARTING NODE
node* getStartingNode(node* head){
    if(head== NULL)
    return NULL;

    node* POI = floydDetect(head);

    node* slow = head;
    node* fast = POI;

    while( slow != fast){
        slow= slow->next;
        fast = fast->next;
    }
    return slow;
}

//STEP 3-> NOW REMOVING LOOP REMOVING LOOP(ABOVE BOTH FUCNTION ARE USED IN THIS)
void RemoveLoop(node* head){
    if(head ==NULL)
    return;

    node* startLoop = getStartingNode(head);
    node* temp = startLoop;

    while(temp->next != startLoop){
       temp = temp -> next;
     }

     temp->next = NULL;
/*********************************************************************************************************************/
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
    
    InsertNode(tail, 5, 10);
    print(tail); 
    cout<<endl;

/*********************************************************************************************************************/
    //Circular Or Not
    if(isCircular(tail))
    cout<<"It is a Circular linked list"<<endl;
    else
    cout<<"Not a Circular linked list"<<endl;
/*********************************************************************************************************************/    
    cout<<endl;


/*********************************************************************************************************************/
     //checking for loop
    if(detectLoop(tail))
    cout<<"Loop Present"<<endl;
    else
    cout<<"Loop not present"<<endl;
/*********************************************************************************************************************/
    cout<<endl;

 
/*********************************************************************************************************************/
   //removing loop and again checking
    RemoveLoop(tail);
    cout<<"Loop removed"<<endl;


    //checking for loop again after removing loop
    if(detectLoop(tail))
    cout<<"Loop Present"<<endl;
    else
    cout<<"Loop not present"<<endl;

    //Circular Or Not checking again after removing loop
    if(isCircular(tail))
    cout<<"It is a Circular linked list"<<endl;
    else
    cout<<"Not a Circular linked list"<<endl;
/*********************************************************************************************************************/

 return 0;
}


 