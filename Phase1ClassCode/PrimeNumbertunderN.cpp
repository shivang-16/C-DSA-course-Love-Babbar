#include<iostream>
#include<vector>
using namespace std;

//BRUTEFORCE APPROACH
/*bool isPrime(int n){
    if(n<=1)
    return false;
    for(int i=2; i<n; i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main(){
    int n; cin>>n;
    int count=0;
    for(int i=2; i<n; i++){
        if(isPrime(i))
        count ++;
     }
   cout<<count<<endl;
}*/

//OPTIMISED APPROACH -> SIEVE OF ERATOSTHENES

int countPrimes(int n){
    int count=0;
    vector<bool>prime(n+1, true);//assuming all elements as prime no.
    prime[0]=prime[1]= false;
    for(int i=2; i<n;i++){
        if(prime[i])
        count++;// Agar prime no. hai to count ko aage badate chalna hai

        for(int j=2*i; j<n; j=j+i){//prime no. ke table m jitne no. aa rhe hai unko non prime kar do
            //return false
            prime[j]= 0;
        }
    }
    return count;
}
int main(){
    int n; cin>>n;
    cout<<countPrimes(n)<<endl;
}