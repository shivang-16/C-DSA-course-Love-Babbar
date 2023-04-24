#include<iostream>
using namespace std;

//1-->Prime 
//0-->Not a Prime
bool isPrime(int n){
    for(int i=2; i<n ; i++){
        if (n%i==0){
            return 0;
        }
        }
        return 1;
    
}
int main(){
    int n;
    cin>>n;
     if (isPrime(n)){
        cout <<"Is a Prime Number"<<endl;
     }
     else{
        cout<< "Not a Prime number"<<endl;
     }
     return 0;
}