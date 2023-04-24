 #include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
      this->data = data;
      this-> next = NULL;
    }
};
//INSERTING A NEW NODE AT TAIL 
void InsertAtTail(node* &tail, int d){//we use pass by refrence because we dont want to create copy we want change in original linked list only
    //create a new node
    node *temp = new node(d);
    tail->next = temp;
    tail = tail->next;
}

void print(node* &head){//here we dont not use pass by refrence then there will be no change at all
    node* temp= head;
    while( temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//FLOYD'S CYCLE DETECTION ALGORITHM
node* floydDetectLopp(node* head){
    if(head==NULL)
    return NULL;

    node* slow = head;
    node* fast= head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast = fast->next;
       }
       slow = slow->next;

       if(slow == fast){
        cout<<"Loop present at "<<slow->data<<endl;
        return slow;
       }
    }
    return NULL;

}

//FINDING STARING NODE OF LOOP
node* getStartingNode(node* head){
    if(head==NULL)
    return NULL;

    //Point Of intersection of fast and slow
    node* POI = floydDetectLopp(head);

    node* slow = head;
    node* fast = POI;

    while(fast != slow){
        fast = fast->next;
        slow = slow->next;
    }

     return slow;     
}

int main(){
    //creating a node
    node* node1= new node(10);
    node* head = node1;
    node* tail = node1;
    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail,15);
    print(head);
    
    InsertAtTail(tail, 22);
    print(head);

    //creating a loop
    tail->next= head->next;
    

    //starting node
    node* start = getStartingNode(head);
    cout<<"Starting node is present at: "<<start->data<<endl;
 

  return 0;
} 
