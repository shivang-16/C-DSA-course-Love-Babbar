#include<iostream>
using namespace std;

int factorial(int n){
     
     //BASE CASE
     if(n == 0)
        return 1;
     
     //RECURISIVE RELATION
     /*int smallerProblem = factorial(n-1);
     int biggerProblem = n * smallerProblem;
        return biggerProblem;*/
     
     //we can also write like this in easy way
     return n*factorial(n-1);

    
}
int main(){
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans<<endl;
}