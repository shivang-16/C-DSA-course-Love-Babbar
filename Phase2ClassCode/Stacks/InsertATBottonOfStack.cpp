#include<iostream>
#include<stack>
using namespace std;

//METHOD 1->

//INSERT ELEMENT AT THE BOTTOM OF THE STACK(Recursive Solution)
void InsertAtBottom(stack<int>&s, int x){
    //base case
    if(s.empty()){
      s.push(x);
      return;
    }
    
    //stack top ko side m rakhte jao aur aage badte jao jabtak base case reach nhi hota
    int num = s.top();
    s.pop();

    //Recursive call
    InsertAtBottom(s, x);

    s.push(num);
}
int main(){
    
    stack<int>st;

    st.push(22);
    st.push(45);
    st.push(23);
    st.push(75);
    st.push(34);

    //insert at bottom
    cout<<"Input the element which you want to insert at bottom "<<endl;
    int x; cin>>x;
    InsertAtBottom(st, x);

    //print elements in stack
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    return 0;
}

/*
//METHOD 2->(alternative solution) By implementing stack in array

class Stack{
    public:
    int* arr; int top; int size;

    Stack(int size){
        this-> size = size;
        top = -1;
        arr = new int[size];
    }
    void push(int element){
        if(size - top >1){
            top++;
            arr[top]= element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peak(){
    if(top>=0)
    return arr[top];
    }
    bool isEmpty(){
        return (top==-1);
    }
};

//INSERT ELEMENT AT THE BOTTOM OF THE STACK(Recursive Solution)
void InsertAtBottom(Stack &s, int x){
    //base case
    if(s.isEmpty()){
      s.push(x);
      return;
    }
    
    //stack top ko side m rakhte jao aur aage badte jao jabtak base case reach nhi hota
    int num = s.peak();
    s.pop();

    //Recursive call
    InsertAtBottom(s, x);

    s.push(num);
}
int main(){
    
    Stack st(6);

    st.push(22);
    st.push(45);
    st.push(23);
    st.push(75);
    st.push(34);

    //insert at bottom
    cout<<"Input the element which you want to insert at bottom "<<endl;
    int x; cin>>x;
    InsertAtBottom(st, x);

    //print elements in stack
    while(!st.isEmpty()){
        cout<<st.peak()<<" ";
        st.pop();
    }
    cout<<endl;

    return 0;
}*/