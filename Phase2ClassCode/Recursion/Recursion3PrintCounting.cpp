#include<iostream>
using namespace std;

void counting(int n){
/*
 //case->1 Tail recursion

    //base case
    if(n==0)
        return ;

    //proccesing
    cout<<n<<" ";

    //recursive relation
    counting(n-1);
*/

//Case->2 Head Recursion
   
   //base case
    if(n==0)
        return ;
    
    //recursive relation
    counting(n-1);
   
   //proccesing
    cout<<n<<" ";

}
int main(){
    int n;
    cin>>n;

    counting(n);

    return 0;
}