#include<iostream>
using namespace std;
bool palindrome(string str, int i, int j){
    //base case
    if(i>j)
    return true ;

    //processing
    if(str[i]!=str[j]){
        return false;
    
    }
    else{
     return palindrome(str, i+1, j-1);//recursive relation
        
    }
}
int main(){
    string name= "nojfon";
    if(palindrome(name, 0, name.length()-1))
    cout<<"String is palindrome"<<endl;
    else
    cout<<"Not a palindrome"<<endl;
}