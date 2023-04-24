#include<iostream>
using namespace std;
bool BinarySearch(int *arr, int s, int e, int k){
    int mid= s+(e-s)/2;
    //base case
    if(s>e)
    return false;
    if(arr[mid]==k)
    return true;

    
    if(arr[mid]<k){
    return BinarySearch(arr, mid+1, e, k);
    
    }
    else{
    return BinarySearch(arr,s, mid-1, k);
   
    }

}
int main(){
    int arr[6]= {2,4,5,10,14,18};
    int key=4;
    if(BinarySearch(arr, 0, 5, key)){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }
    return 0;
}