#include<iostream>
using namespace std;
int main(){
   /* int num=1;
    char ch='2';
    cout << endl;
    switch(ch){
        case 1: cout << "First" <<endl;
        break;
        case '2': switch(num){
           case 1: cout<<"value of num is" << num << endl;
           break;
        }
        break;
        default: cout<< "It is default case"<<endl;
    }
    cout << endl;
    return 0;
*/
    int num=1;
    
    switch(2*num){
        case '1': cout << "First" <<endl;
        break;
        case 2: cout<<"Second" <<endl;
                cout<<"Second again" <<endl;
        break;
        default: cout<< "It is default case"<<endl;
        
    }
    

    cout << endl;
    return 0;
}
