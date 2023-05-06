#include<iostream>
#include<stack>
using namespace std;

bool isValidParentheses(string str){
      //creating a stack
      stack<char>s;
    
    //pushing string into stack
    for(int i= 0; i<str.length(); i++){
        char ch = str[i];
       
       //case 1-> if opening bracket => push into stack
       //case 2-> if closing bracket => check if corresponding opening bracker present(if present then pop)
          //so from here we can say if STACK become empty at last then valid parenthese

        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }  
        else{
            //for closing bracket
            if(!s.empty()){
            char top = s.top();
              //if match found then pop
            if( (ch == ')' && top=='(' ) || 
                (ch == '}' && top=='{' ) ||
                (ch == ']' && top=='[') )
            {
                 s.pop();
            }
            else{//match not found
                  return false;
            }
           }
           else{//stack empty and closing bracket found 
             return false;
           }
        }
     }

     //now check
     if(s.empty())//i.e VALID PARANTHESES
     return true;
     else
     return false;
}

int main(){
    string str = "[{()}]";
    if(isValidParentheses(str)){
        cout<<"It is valid parantheses"<<endl;
    }
    else{
        cout<<"NOT a valid parantheses" <<endl;
    }

    return 0;
}