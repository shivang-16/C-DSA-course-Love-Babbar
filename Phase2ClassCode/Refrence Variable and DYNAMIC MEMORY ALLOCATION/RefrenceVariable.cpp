#include<iostream>
using namespace std;
int main(){
    int i = 5;

    //now we create a reference variable
    int &j=i;// or int& j=i;

    cout<< i << endl;
    cout<< j <<endl;
    i++;
    cout<< i <<endl;
    cout<< j <<endl;
    j++;
    cout<< i <<endl;
    cout<< j <<endl;
}