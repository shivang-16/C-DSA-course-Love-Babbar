#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this-> left =NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    //creating root
    root = new node(data);

    if(data == -1){
        return NULL;
    }
    
    //recursive call for both left and right node
    cout<<"Enter data for inserting in left "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}
void LevelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    //seperator
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

    if(temp == NULL){
        cout<<endl;
        if(!q.empty()){
        //if some nodes still present then use seperator
        q.push(NULL);
       }
    }
    else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
  }
}
  
int main(){
    node* root =NULL;

    //creating tree
    root = buildTree(root);
     
    //input eg-> 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Level Order Traversal "<<endl;
    LevelOrderTraversal(root);
    return 0;
}