#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i< n-1; i++){
        int minIndex= i;

        for(int j=i+1; j<n; j++){
            if (arr[j]<arr[minIndex])
            minIndex=j;
        }
         swap(arr[minIndex], arr[i]);
    }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
     
}
int main(){
    int arr[8]={54,8,26,0,14,5,98,5};
    selectionSort(arr, 8);
    printArray(arr, 8);
}