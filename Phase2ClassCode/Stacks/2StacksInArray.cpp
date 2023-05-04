#include<iostream>
#include<stack>
using namespace std;

class twoStack{
    public:
    //data members
    int *arr;
    int top1, top2;
    int size;

    
    //initialize twoStack
    twoStack(int size){
        this->size = size;
        top1= -1;
        top2= size;
        arr = new int[size];
    }

    //push in stack 1;
    void push1(int num){
        if(top2- top1 > 1){//atleast one space is present
          top1++;
          arr[top1] = num;
        }
        else{
            cout<<"Stack OverFlow"<<endl;
        }
    }

    //push in stack 2;
    void push2(int num){
        if(top2- top1 > 1){
            top2 --;
            arr[top2]= num;
        }
        else{
            cout<<"Stack OverFlow"<<endl;
        }
    }

    //pop in stack 1
    int pop1(){
        if(top1 >= 0){
          int ans = arr[top1];
          top1--;
          return ans;
        }
        else{
            return -1;
        }
    }
     
    //pop in stack 2
    int pop2(){
        if(top2 < size){
          int ans = arr[top2];
          top2++;
          return ans;
        }
        else{
            return -1;
        }
    }

   //peak element of stack 1
   int peak1(){
    if(top1>=0)
    return arr[top1];
    else{
        cout<<"Stack is Empty"<<endl;
        return -1;
    }
   }

   //peak element of stack 2
   int peak2(){
    if(top2>=0)
    return arr[top2];
    else{
        cout<<"Stack is Empty"<<endl;
        return -1;
    }
   }

};
int main(){
    twoStack st(6);

//pushing in 1st stack
    st.push1(4);
    st.push1(5);
    st.push1(6);

//pushing in 2nd stack
    st.push2(0);
    st.push2(4);
    st.push2(9);

    cout<<st.peak1()<<endl;
    cout<<st.peak2()<<endl;

    st.pop1();
    st.pop2();
    cout<<st.peak1()<<endl;
    cout<<st.peak2()<<endl;

return 0;
}
