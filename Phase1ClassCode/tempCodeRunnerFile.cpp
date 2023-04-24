#include<iostream>
using namespace std;
 
int peakIndex(int arr[], int n){
    int s=0, e=n-1;
    int mid= s+(e-s)/2;

    while(s<=e){
        if (arr[mid]<arr[mid+1])
        s=mid+1;
        else
        e=mid; //e=mid-1 nhi hoga because peak index mid term bhi ho sakta h
 }
}
 int main(){
    int arr[4]={3,4,5,1};
    cout<<" Peak index in this Array is: "<< peakIndex(arr, 4) <<endl;
     
     return 0;
 }