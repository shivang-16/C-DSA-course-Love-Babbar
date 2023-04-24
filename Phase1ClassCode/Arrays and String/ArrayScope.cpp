#include<iostream>
using namespace std;
 
 void update(int arr[], int n){
    cout << endl << "Inside the Function"<<endl;
     
     //updating array's first element
     arr[0]=120;
     
    //PRINTING THE ARRAY
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }cout<<endl;
    cout<< "Going back to main Function"<<endl<<endl;
    
 }
 
 int main(){
     
     int arr[3]={1,2,3};
    update(arr, 3);

    //printing the array
    cout<<"Printing in main Function"<<endl;
    for(int i=0; i<3; i++){
        cout << arr[i]<<" ";
            }
        cout<<endl;
        return 0;

 }