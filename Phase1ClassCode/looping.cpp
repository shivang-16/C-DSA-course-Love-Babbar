#include<iostream>
using namespace std;
 int main(){
   /* int n;
    cin >> n;
     int i= 1;

     while(i<=n){
        cout << i <<" ";
        i=i+1;

     }
    
      int n;
      cin>>n;
      int i=1;
      int sum=0;
       while(i<=n){
         sum= sum+i;
         i=i+1;

       }
         cout << "Value of sum is" << sum << endl;
 */
        
        int n;
        cin >> n;
       
       int i=2;
        
        while (i<n){
            if (n%i==0){
                cout << "Not Prime for" << i << endl;
            }
            
        else{
            cout<< "Prime for" << i << endl;
        }
        i=i+1;
        }
 
 }
 