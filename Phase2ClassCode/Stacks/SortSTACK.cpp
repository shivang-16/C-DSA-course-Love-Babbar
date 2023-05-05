#include<iostream>
#include<stack>
using namespace std;
void sortedInsert(stack<int> &s, int x){
   //base case
   if(s.empty() || s.top() < x){
   s.push(x);
   return;
   }
   
   int num = s.top();
   s.pop();

   //recursive call
   sortedInsert(s, x);

   s.push(num);

}
void sortStack(stack<int> &s){
    //base case
    if(s.empty()){
        return ;
    }

    int num = s.top();
    s.pop();

    //Recursive call
    sortStack(s);

    sortedInsert(s, num);
}
int main(){
    
    stack<int>st;

    st.push(2);
    st.push(4);
    st.push(3);
    st.push(7);
    st.push(5);
 
    //Reverse stack
    sortStack(st);
    
    //print elements of stack
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}