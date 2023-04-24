#include<iostream>
using namespace std;
int main(){
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>> name;
    //Putting null character between name
    name[4]='\0';
    cout<< "Your name is ";
    cout<<name<<endl;
    return 0;
}