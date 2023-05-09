#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree1(node* root1){

    cout<<"Enter the data for tree 1: "<<endl;
    int data; cin>>data;
    root1 = new node(data);
    
    if(data == -1)
    return NULL;

    cout<<"Enter the data inserted on the left of "<<data<<endl;
    root1->left = buildTree1(root1 ->left);
    cout<<"Enter the data inserted on the right of "<<data<<endl;
    root1->right = buildTree1(root1 ->right);

    return root1;
}
node* buildTree2(node* root2){

    cout<<"Enter the data for tree 2: "<<endl;
    int data; cin>>data;
    root2 = new node(data);
    
    if(data == -1)
    return NULL;

    cout<<"Enter the data inserted on the left of "<<data<<endl;
    root2->left = buildTree2(root2 ->left);
    cout<<"Enter the data inserted on the right of "<<data<<endl;
    root2->right = buildTree2(root2 ->right);

    return root2;
}

//Identical Trees
bool isIndentical(node* r1, node* r2){
    //base case
    if(r1 == NULL && r2 == NULL)
    return true;

    if(r1 == NULL && r2 != NULL)
    return false;

    if(r1 != NULL && r2 == NULL)
    return false;

    //recursive call
    bool left = isIndentical(r1->left, r2->left);
    bool right = isIndentical(r1->right , r2->right);

    bool value = r1->data == r2->data;

    if(left && right && value){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    
    node* root1 = NULL;
    node* root2 = NULL;

    //creating tree
    root1 = buildTree1(root1);
    root2 = buildTree2(root2);

    //identical function
    if(isIndentical(root1, root2))
    cout<<"They are identical tree"<<endl;
    else
    cout<<"NOT identical tress"<<endl;

    return 0;
}