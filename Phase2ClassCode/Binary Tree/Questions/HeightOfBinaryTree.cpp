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

//Height of BinaryTree
int height(node* root){
    //base case
    if(root == NULL)
     return 0;

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left,right)+1; 

    return ans;
}

int main(){
    node* root = NULL;

    //creating tree
    root = buildTree(root);


    //height of binary tree
      //input eg-> A-> 1 2 3 7 -1 -1 8 -1 -1 4 -1 -1 5 6 -1 -1 -1 (height = 4)
      //           B-> 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 (height = 3)
    int ans = height(root);
    cout<<"Height of Binary Tree: "<<ans<<endl;  

    return 0;
} 