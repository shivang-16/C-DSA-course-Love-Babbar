#include<iostream>
#include<stack>
using namespace std;

//Method 1->

void InsertAtBottom(stack<int> &s, int x){
    //base case
    if(s.empty()){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();

    InsertAtBottom(s,x);

    s.push(num);
}

//REVERSE STACK USING RECURSION
void ReverseStack(stack<int> &s){
    //base case
    if(s.empty()){
        return ;
    }

    //stack top ko side m rakhte jao aur aage badte jao jabtak base case reach nhi hota
    int num= s.top();
    s.pop();

    //Recursive call(recursion 1st ko chor k remaining part ko reverse krke dega)
    ReverseStack(s);

    InsertAtBottom(s,num);
}

int main(){
    
    stack<int>st;

    st.push(2);
    st.push(4);
    st.push(3);
    st.push(7);
    st.push(5);
 
    //Reverse stack
    ReverseStack(st);
    
    //print elements of stack
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
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

void InsertAtBottom(Stack &s, int x){
    //base case
    if(s.isEmpty()){
        s.push(x);
        return;
    }
    int num = s.peak();
    s.pop();

    InsertAtBottom(s,x);

    s.push(num);
}

//REVERSE STACK USING RECURSION
void ReverseStack(Stack &s){
    //base case
    if(s.isEmpty()){
        return ;
    }

    //stack top ko side m rakhte jao aur aage badte jao jabtak base case reach nhi hota
    int num= s.peak();
    s.pop();

    //Recursive call(recursion 1st ko chor k remaining part ko reverse krke dega)
    ReverseStack(s);

    InsertAtBottom(s,num);
}

int main(){
    
    Stack st(6);

    st.push(2);
    st.push(4);
    st.push(3);
    st.push(7);
    st.push(5);
 
    //Reverse stack
    ReverseStack(st);
    
    //print elements of stack
    while(!st.isEmpty()){
        cout<<st.peak()<<" ";
        st.pop();
    }
    cout<<endl;
}
*/