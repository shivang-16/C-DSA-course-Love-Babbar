#include<iostream>
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

void PostorderTraversal(node* root){
    //Postorder Traversal follows -> LRN
   
    //base case
    if(root == NULL){
        return;
    }
    
    //1-> L: Left me jao
    PostorderTraversal(root->left);

    //2-> R: Right me jao
    PostorderTraversal(root->right);

    //3-> N: Print current node
    cout<<root->data<<" ";


}

int main(){
    node* root = NULL;

    //creating tree
    root = buildTree(root);

    //indorder traversal
      //input eg-> 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Postorder Traversal: "<<" ";
    PostorderTraversal(root);

    return 0;
}