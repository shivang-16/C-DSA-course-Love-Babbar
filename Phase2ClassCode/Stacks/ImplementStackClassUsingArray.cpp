#include<iostream>
#include<stack>
using namespace std;
class Stack{
    //data members
    public:
      int *arr;
      int top;
      int size;

     //behaviour
      Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
      } 

  //push operation
  void push(int element){
    if(size - top > 1){//this condition indicate aleast one space is available in array
       top++;
       arr[top] = element;
    }
    else{
        cout<<"Stack Overflow"<<endl;
    }
   } 
   
   //pop operation
   void pop(){
    if(top>=0){//checking if element present
       top--;
    }
    else{
        cout<<"Stack Underflow"<<endl;
    }
   }

   //peak element
   int peak(){
    if(top>=0)
    return arr[top];
    else{
        cout<<"Stack is Empty"<<endl;
        return -1;
    }
   }

   //isEmpty
   bool isEmpty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
   }
};

int main(){
    Stack st(3);

    st.push(22);
    st.push(45);
    st.push(23);
    

    cout<<"Peak Element: "<<st.peak()<<endl;

    st.pop();
    cout<<"Peak Element after one pop: "<<st.peak()<<endl;
   
    st.pop();
    cout<<"Peak Element after second pop: "<<st.peak()<<endl;
  
    st.pop();
    cout<<"Peak Element after 3rd pop: "<<st.peak()<<endl;
     
    st.pop();


    if(st.isEmpty())
    cout<<"Stack is Empty"<<endl;
    else
    cout<<"Stack is NOT Empty"<<endl;
  
  return 0;
}