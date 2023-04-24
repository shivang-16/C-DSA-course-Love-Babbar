#include<iostream>
using namespace std;
void Reverse(string& str, int i , int j){/*we have to pass by refernce because if donot reference variable then 
                                           copy of string(of main function) is created in Reverse function and 
                                           now if do any change then it occur only in copy so when we call print 
                                           in main function then same string will print with reverse*/
    //base case
    if(i>j)
    return;

    //processing
    swap(str[i], str[j] );
    i++;j--;

    //recursive function
    Reverse(str, i , j);
    
    }
int main(){
    string name="Shivang";
    Reverse(name, 0, name.length()-1);
    cout<<name<<endl;
}