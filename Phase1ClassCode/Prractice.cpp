#include<iostream>
using namespace std;
int main(){
  /* cout<< "Enter first number"<<endl;

    int a;
    cin>>a;
    
    5cout << "Enter second number"<< endl;

    int b;
    cin>>b;
    
    int sum=a+b;
    cout<< "The sum is:" << sum << endl;

      cout<< "CALCULATING SIMPLE INTEREST" <<endl;
      cout<<"Enter the value of principal"<< endl;
      int p;
      cin>>p;
      
      cout<<"Enter the value of rate"<< endl;
      int r;
      cin>>r;

      cout<<"Enter the value of time"<< endl;
      int t;
      cin>>t;

      int sp= p*r*t/100;
      cout << "Simple interest is:" << sp <<endl;


      int a;
      cin>>a;
      int b;
      cin>>b;
       if (a<b){
        cout<< "Yes" << endl;
       }
       else{
        cout<< "No" << endl;
       }


       int n;
       cin>>n;
       
       if(n%2==0){
         cout<< "Even" <<endl;
         }
         else{
           cout<< "Odd" << endl;
         }

     
       int n;
       cin>>n;

       if(n>0){
        cout << "Positive" << endl;
        if (n<0){
        cout << "Negative" << endl;
        }
        
       }
       else{
        cout << "Zero" << endl;
       }


       int a;
       cin>>a;
       int b;
       cin>>b;
       int c;
       cin>>c;
       if (a+b>c , b+c>a, c+a>b){
        cout<< "It is a Valid Triangle" << endl;
       }
       else{
        cout<< "Not a Valid Triangle" << endl;
       }

       
       int n;
       cin>>n;
        int i=0;

        while(i<n){
            cout << i <<" " ;
            i=i+1;
        }
     
         
          int n;
         cin>>n;
          int i=2;

          while (i<=n){
             cout<< i << endl;
             i=i+2;
        }
        

         int n;
         cin>>n;
        int sum=0;
        int i=1;
        
        
          while(i<=n){
            sum = sum+i;
            i=i+1;
            }
          cout << sum << endl;
    

        int n;
        cin>>n;
        int i=1;
        int product=1;

        while (i<=n){
            product = product*i;
            i=i+1;
        }     
            cout<< "The value of Factorial is:" << product << endl;
          
      */

         int n;
         cin>>n;
        int i=2;
         while(i<n){
          if (i%1==0, i%n==0){
            cout<< "Not Prime for" << i << endl;
          }
          else {
            cout << "Prime for"<< i << endl;

          }
          i=i+1;
         }   
             
}

   