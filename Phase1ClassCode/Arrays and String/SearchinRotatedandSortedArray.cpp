#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s=0, e=n-1;
    int mid= s+(e-s)/2;
    while (s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key){
    int start=s;
    int end=e;
    int mid=s+(e-s)/2;
    while (s<=e){
        if (arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int searchSorted(int arr[], int n, int key){
int pivot= getPivot(arr, n);
    if(key>=arr[pivot] && key<=arr[n-1]){
        return binarySearch(arr, pivot, n-1, key);
     }
     else{
        return binarySearch(arr, 0, pivot-1, key);
     }
}
int main(){
    int odd[5]={7,9,1,2,3};
    
    cout << "Key is on the index:" <<searchSorted(odd, 5, 2)<<endl;

    return 0;
}