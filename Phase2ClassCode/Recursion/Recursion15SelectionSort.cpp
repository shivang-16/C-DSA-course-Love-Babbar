#include<iostream>
using namespace std;

void selectionSort(int *arr, int n){
    //base case
    if(n==0||n==1){
        return;
    }

    //1 case solve 
    for(int i=0; i<n-1; i++){
        int minIndex=i;
        if(arr[i]>arr[i+1]){
            minIndex= i+1;
        }
        swap(arr[i], arr[minIndex]);
    }

    //Recursive call
    selectionSort(arr, n-1);
}

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[7]={4,6,3,2,0,10,7};
    selectionSort(arr,7);
    print(arr, 7);

    return 0;
}