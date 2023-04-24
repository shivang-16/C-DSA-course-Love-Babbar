#include<iostream>
using namespace std;

int waysToClimbStair(int n){
    //BASE CASE
    if(n<0)
    return 0;
    if(n==0)
    return 1;

    //RECURSIVE RELATION
    return waysToClimbStair(n-1)+waysToClimbStair(n-2);
}
int main(){
    int n;cin>>n;
    cout<<waysToClimbStair(n)<<endl;
}