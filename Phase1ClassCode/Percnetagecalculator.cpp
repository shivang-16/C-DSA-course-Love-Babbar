#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cout<<"Physics Marks"<<endl;
    cin>>a;
    cout<<"Chemistry Marks"<<endl;
    cin>>b;
    cout<<"Maths Marks"<<endl;
    cin>>c;
    cout<<"English Marks"<<endl;
    cin>>d;
    cout<<"Computer Marks"<<endl;
    cin>>e;

    int n=((a+b+c+d+e)*100)/500;
    cout<<"Percentage"<<" "<< n <<endl;
    
    if (n<33){
        cout<<"Status: FAILED"<<endl;
    }
    else{
        cout<<"Status: PASSED"<<endl;
    }

}