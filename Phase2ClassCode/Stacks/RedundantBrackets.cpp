#include<iostream>
#include<stack>
using namespace std;

/*
Assuming--
Redundant Brackes-> Unneccesary brackets(nothing present inside brackets)
NON Redundant Brackets-> Atleast one operator is present between them
*/

bool isRedundant( string str){
      
    stack<char>st;

    for(int i=0; i<str.length(); i++){
        char ch = str[i];
    
    
    if( ch == '(' || ch== '+' || ch== '-' || ch== '*' || ch== '/' ){
      //push into stack
      st.push(ch);
    }
    else{
        // ch = ')' or {lower case letter(which is not necessary)}
        if(ch== ')'){

            //now check inside stack
            bool operatorFound = false;
              while(st.top() != '('){
              char top = st.top();
              if( top == '+' || top == '-' || top == '*' || top == '/' ){
                   operatorFound =true;
              }
              st.pop();
            }
            
            //we came out of loop when we found an opening bracket so pop the opening bracket
            st.pop();

            if(!operatorFound)//if operator not found =>Redundant Brackets
            return true; 
           
        }
    }
 }
   return false;
}
int main(){
    string str= "((a+b)*c)";

    if(isRedundant(str))
    cout<<"Redundant Brackets"<<endl;
    else
    cout<<"NOT Redundants Brackets"<<endl;

    return 0;
}

