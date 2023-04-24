#include<iostream>
using namespace std;
 //POW(a,b)
 /*int main(){
    int a,b;
    cin>>a>>b;
    int ans=1;
    for (int i=1; i<=b;i++){
        ans = ans*a;
    }
    cout <<"answer is"<< ans << endl;
 }*/

 //POW(a,b) by FUNCTION

    //Function Signature
    int power(int num1, int num2 ){
     
     //Function body
        int ans = 1;
        for(int i=1; i<=num2; i++){
            ans = ans*num1;
        }
        return ans;
    }
      
      int main(){
        int a,b;
        cin>>a>>b;

        //Function Call
      
        cout << "answer is " << power(a,b) << endl;

        int c,d;
        cin>>c>>d;
        int answer1 = power(c,d);
        cout << "answer is " << answer1 << endl;
      }