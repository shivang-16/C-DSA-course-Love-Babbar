#include<iostream>
using namespace std;
void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        for(; j>=0; j--){
            if(arr[j]>temp){
                //shift karna padega
                 arr[j+1]=arr[j];
            }
            else{
                //ruk jao
                break;
            }
        }
        arr[j+1]=temp;
    }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[8]={54,8,26,0,14,5,98,5};
    insertionSort(arr, 8);
    printArray(arr, 8);
}
