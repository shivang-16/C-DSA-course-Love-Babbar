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

//APPRAOCH 1-> DIAMETER OF A BINARY TREE(Time complexity = O(n2))
int diameter(node* root){
    //base case
    if(root == NULL)
    return 0;

    int opt1 = diameter(root->left);
    int opt2 = diameter(root->right);
    int opt3 = height(root->left)+ height(root->right) + 1;

    int ans = max(opt1, max(opt2, opt3));//this function will give max among all three
    return ans;
}

//APPRAOCH 2-> DIAMETER OF A BINARY TREE(Time complexity = O(n))


int main(){
    node* root = NULL;

    //creating tree
    root = buildTree(root);


    /*diametet of binary tree
      input eg-> A-> 1 2 3 7 -1 -1 8 -1 -1 4 -1 -1 5 6 -1 -1 -1 (Diameter = 6)
                 B-> 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 (Diameter = 5)*/
    int ans = diameter(root);
    cout<<"Diameter of Binary Tree: "<<ans<<endl;  

    return 0;
} 