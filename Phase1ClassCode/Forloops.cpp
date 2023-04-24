#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    cout<<"printing count from 1 to n"<<endl;

    for(int i=1; i<n; i++){
         cout<< i << " ";
    }
}
      
     /* int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
     int i =1;
     for(; ;){
        if(i<=n){
            cout<< i << " "; 
        }
        else{
            break;
        }
        i++;
     }
     

    for(int a=0 , b=1, c=2; a>=0 && b>=1 && c>=2;  a--,b--,c--){
        cout << a <<" "<< b <<" "<< c<< endl;
    }
    
        
    //TO FIND SUM OF ALL NUMBERS FROM 1 T0 N

      int n;
      cout << "Enter the number" << endl;
      cin>>n;
       int sum=0;
       for(int i=1; i<=n; i++ ){
         //sum=sum+i;
         sum+= i;
        }
         cout<< "sum =" << sum <<endl;
    */
              
      //FIBONACCI SERIES

        /*  int n=10;
          int a=0;
          int b=1;
          cout << a << " " << b << " ";
          for(int i=1; i<=n; i++){
            int nextnumber= a+b;
            cout<<nextnumber<<" ";

            a=b;
            b=nextnumber;
          }
  
             int n;
             cin>>n;
             int a=0;
             int b=1;
             cout<< a << " " << b << " ";
              int i=1;
              while(i<=n){
                int next=a+b;
                cout<<next<<" ";
                 a=b;
                 b=next;
                 i+=1;
              }
             
      
      //PRIME NUMBER QUES

         int n;
         cin>>n;
         bool isPrime=1;
         for(int i=2; i<n; i++){
          if(n%i==0){
            isPrime=0;
            break;
          }
          }
          if(isPrime==0){
            cout<<"Not Prime"<<endl;
          }
          else{
            cout<<"Prime"<<endl;
          }
        
   
        for(int i=0; i<5; i++){
          cout<<"hi"<<endl;
          cout<<"hey"<<endl;
          continue;
          cout<<"reply to karde"<<endl;
        }
   }*/

