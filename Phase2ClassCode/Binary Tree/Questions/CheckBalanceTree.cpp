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

int height(node* root){
    //base case
    if(root == NULL)
    return 0;

    int left = height(root->left);
    int right = height(root->right);
    
    int ans = max(left, right)+1;

    return ans;
}

//APPRAOCH 1-> BALANCE BINARY TREE (Time complexity = O(n2))
bool isBalance(node* root){
    //base case
    if(root == NULL)
    return true;

    //recursive call
    bool left = isBalance(root->left);
    bool right = isBalance(root->right);
      
      //absolute diffrence
    bool diff = abs (height(root->left) - height(root->right)) <= 1;
    
    if(left && right && diff){
        return true;
    }
    else{
        return false;
    }
}

//APPRAOCH 2->(OMPTIMISED) BALANCE BINARY TREE (Time complexity = O(n))
//use of pair


int main(){
    node* root = NULL;

    //creating tree
    root = buildTree(root);


    /*Balance binary tree
      input eg-> A-> 1 2 3 7 -1 -1 8 -1 -1 4 -1 -1 5 6 -1 -1 -1 (Balanced)
                 B-> 1 2 4 -1 -1 -1  3 5 6 -1 -1 -1 -1 (Unbalanced)*/
      if(isBalance(root))
      cout<<"It is a Balance Tree "<<endl;
      else
      cout<<"NOT a Balance Tree"<<endl;

    return 0;
} 