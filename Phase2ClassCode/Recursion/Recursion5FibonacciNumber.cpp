#include<iostream>
using namespace std;

int fib(int n){
    //base case
    if(n==0)//here first term of series is zeroth term(if we do n==1 then first term is consider as 1st only)
    return 0;
    if(n==1)
    return 1;

    //recursive relation
    return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<< "nth fibonacci no.-> "<<fib(n)<<endl;
}
