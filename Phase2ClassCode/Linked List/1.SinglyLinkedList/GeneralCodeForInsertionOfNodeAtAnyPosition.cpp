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

//INSERTING A NEW NODE AT HEAD
void InsertAtHead(node* &head, int d){//we use pass by refrence because we dont want to create copy we want change in original linked list only
    //create a new node
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

//INSERTING A NEW NODE AT TAIL 
void InsertAtTail(node* &tail, int d){//we use pass by refrence because we dont want to create copy we want change in original linked list only
    //create a new node
    node *temp = new node(d);
    tail->next = temp;
    tail = tail->next;
}

//INSERTING A NEW NODE AT ANY POSITON 
void InsertAtPosition(node* &tail, node* &head, int position, int d){
    
    //we have to put condition if we want to insert a node at starting positon
    if(position==1){
        InsertAtHead(head, d);
        return;
    }

    node* temp= head;
    int count=1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }

    //inserting at last positon
    if(temp-> next == NULL){
        InsertAtTail(tail,d);
        return;
    }
    
    //creating a node for d
    node* nodeToInsert = new node(d);
    nodeToInsert-> next= temp->next;
    temp->next = nodeToInsert;
}

void print(node* &head){//here we dont not use pass by refrence then there will be no change at all
    node* temp= head;
    while( temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    //creating a node
    node* node1= new node(10);
    
   //head pointed to node1
    node* head = node1;
    //tail pointed to node1
    node* tail = node1;
    print(head);

   //InsertAtHead(head, 12);
    InsertAtTail(tail, 12);
    print(head);

    //InsertAtHead(head, 15);
    InsertAtTail(tail,15);
    print(head);
    
    //Insert at postion
     //middle case
    // InsertAtPosition(tail,head, 3, 22);
    // print(head);
    //  //starting case
    // InsertAtPosition(tail,head, 1, 32);
    // print(head);
      //ending case
    InsertAtPosition(tail,head, 4 , 42);
    print(head);

    cout<<"head: "<< head->data <<endl;
    cout<<"tail: "<< tail->data <<endl;

  return 0;
} 