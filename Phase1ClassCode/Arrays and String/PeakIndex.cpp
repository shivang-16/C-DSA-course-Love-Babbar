#include<iostream>
using namespace std;
 
int peakIndex(int arr[], int n){ 
    int s=0, e=n-1;
    int mid= s+(e-s)/2;

    while(s<e){
        if (arr[mid]<arr[mid+1]){
        s=mid+1;
        }
        else{
        e=mid; //e=mid-1 nhi hoga because peak index mid term bhi ho sakta h
        }
        mid= s+(e-s)/2;
    }
    return s; //OR return e; also correct
}
 int main(){
    int even[5]={1,4,3,1};
    cout<<" Peak index in this Array is: "<< peakIndex(even, 4) <<endl;
     
     return 0;
 }

