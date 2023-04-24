#include<iostream>
#include<math.h>
using namespace std;

int main(){

    //Ist APPROACH

    /*int n;
    cin>>n;
    for(int i=0; i<=30; i++){
        int ans=pow(2,i);
        if (ans==n){
            cout<<"It is Power of 2"<<endl;
        }
    }*/

    //2nd APPROACH
        int n;
        cin>>n;
        int ans=1;
        for(int i=0; i<=30; i++){
            if (ans==n){
                cout<<"Power of 2"<<endl;
            }
            if( ans<(INT8_MAX/2)){
            ans=ans*2;
        }
        }
return 0;

}

