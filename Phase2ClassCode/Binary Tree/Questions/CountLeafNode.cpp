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


//counting leaf nodes(LEAF NODE ARE NODES WHICH NO CHILD)
void Inorder(node* root, int& count){
    //Inorder Traversal follows -> LNR
   
    //base case
    if(root == NULL){
        return;
    }

    Inorder(root->left, count);
    
    //counting leaf node
    if(root->left == NULL && root->right == NULL)
    count++;

    Inorder(root->right, count);
}

int noOfLeafNodes(node* &root){
    int count = 0;
    Inorder(root, count);
    return count;

}
int main(){
    node* root = NULL;

    //creating tree
    root = buildTree(root);
      
    int ans = noOfLeafNodes(root);
    cout<<"No. of leaf nodes are: "<<ans<<endl;

    return 0;
}