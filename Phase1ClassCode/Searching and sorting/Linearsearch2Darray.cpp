#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int key, int x, int y){//agar hum function pass kr rhe hai 2DArray k case m to aleast no. of col. specify karna padega varna error aajayega
  for(int i=0; i<x; i++){
    for(int j=0; j<y; j++){
        if(arr[i][j]==key)
        return 1;
    }
   }
    return 0;
}
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"Enter the element to search "<<endl;
    int target;
    cin>>target;
    if(isPresent(arr,target,3,4)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}