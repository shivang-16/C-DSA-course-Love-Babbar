#include<iostream>
using namespace std;

int power(int n){

    //BASE CASE
    if(n==0)
      return 1;
    
    //RECURSIVE RELATION
     /*int smallerProblem = power(n-1);
    int biggerProblem = 2*smallerProblem;
        return biggerProblem; */

    //we can also write like this in easy way
    return 2*power(n-1);
}

int main(){
    int n;
    cin>>n;
    int ans = power(n);
    cout<<ans<<endl;

    return 0;
}