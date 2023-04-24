#include<iostream>
using namespace std;

void printArray(){

}
int main(){
     
     int number[15];
    //Accessing an array
     cout<< "Value at 4 index"<< number[4] <<endl;
    //INTIALISING AN ARRAY
    int second[3] = {5,7,11};
    //Accessing an element
    cout<< "Value at 2 index"<< second[2]<<endl;


     
     int third[15] = {2,7};
     int n=15;
     cout<<"Printing the array" << endl;
     for(int i=0; i<n; i++){
          cout << third[i]<< " ";
     }
     
     
     //Initialising all location with zero
     int fourth[10]={0};
     int m=10;
     cout<<"printing the array"<<endl;
     for(int i=0; i<m; i++){
          cout << fourth[i]<<" ";
     }

     
     int fifth[10]={1};
     n=10;
     cout<<"printing the array"<<endl;
     for(int i=0; i<n; i++){
          cout << fifth[i]<<" ";
     }
     cout<<endl<<" Everything is Fine"<<endl<<endl;
     return 0;
     }