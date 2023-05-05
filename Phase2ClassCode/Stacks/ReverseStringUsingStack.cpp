#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str = "LUCKY";
    cout<<"Original string: "<<str<<endl;
    //creating a stack
    stack<char>s;

    for(int i=0; i<str.length(); i++){
        
        //implementing string into stack
        char ch = str[i];
        s.push(ch);
    }
    
    string ans = " ";
    while(!s.empty()){
        char cr = s.top();
        ans.push_back(cr);//top element ko ans m store karate jao ans pop krte jao
        s.pop();
    }
    cout<<"Reverse string: "<<ans<<endl;

 return 0;
}