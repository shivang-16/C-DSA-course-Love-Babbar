#include<iostream>
#include<stack>
using namespace std;

//DELETE MIDDLE ELEMENT OF STACK(Recursive Solution)
void deleteMid(stack<int> &s, int size, int count){
    
     //base case
     if(count == size/2){
        s.pop();
        return;
     }
     
     //stack top ko side m rakhte jao aur aage badte jao jabtak base case reach nhi hota
     int num = s.top();
     s.pop();
     
     //recursive call
     deleteMid(s, size, count+1);

     s.push(num);
}

int main(){
    stack<int>st;

    st.push(22);
    st.push(45);
    st.push(23);
    st.push(75);
    st.push(34);
    
    int count= 0;
    deleteMid(st , 5, count );
    
    //printing elements in stack
    while(!st.empty()){
    cout<<st.top()<<" ";
    //Now removing the top element of the stack after it has been printed
    st.pop();
    }
    cout<<endl;

    return 0;
}


/*
//METHOD 2->

//IMPLEMENTATION OF STACK IN ARRAY AND THEN DELETING ITS MIDDLE ELEMENT
class Stack{
    public:
    int* arr;
    int top; 
    int size;

    //behavior
    Stack(int size){
        this->size = size;
        top= -1;
        arr= new int[size];
    }
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top]= element;
        }
        else{
            cout<<"Stack OverFlow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack UnderFlow"<<endl;
        }
    }
    int peak(){
    if(top>=0)
    return arr[top];
    else{
        cout<<"Stack is Empty"<<endl;
        return -1;
    }
   }
    bool isEmpty(){
        return (top == -1);
    }

};

//DELETE MIDDLE ELEMENT OF STACK(Recursive Solution)
void deleteMid(Stack &s,int size, int count){
    
     //base case
     if(count == size/2){
        s.pop();
        return;
     }
     
     //stack top ko side m rakhte jao aur aage badte jao jabtak base case reach nhi hota
     int num = s.peak();
     s.pop();
     
     //recursive call
     deleteMid(s, size, count+1);

     s.push(num);
}

int main(){
    Stack st(5);

    st.push(22);
    st.push(45);
    st.push(23);
    st.push(75);
    st.push(34);
    
    int count= 0;
    deleteMid(st , 5, count );
    
    //printing elements in stack
    while(!st.isEmpty()){
    cout<<st.peak()<<" ";
    //Now removing the top element of the stack after it has been printed
    st.pop();
    }
    cout<<endl;

    return 0;

}
*/