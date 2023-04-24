#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid= (s+e)/2;
    
    int l1= mid-s+1;
    int l2= e-mid;


    //creating two array of size l1 and l2
    int *arr1 = new int[l1];
    int *arr2 = new int[l2];

    //copying value in first array
    int mainArrayIndex=s;
    for(int i=0; i<l1; i++){
        arr1[i]= arr[mainArrayIndex++];
    }
    
    //copying value in second array
    mainArrayIndex=mid+1;
    for(int i=0; i<l2; i++){
        arr2[i]= arr[mainArrayIndex++];
    }

    //merge 2 sorted array(already studied earlier)
     int index1=0;
    int index2=0;
    mainArrayIndex=s;
    while(index1<l1 && index2<l2){
        if(arr1[index1]<arr2[index2])
        arr[mainArrayIndex++]=arr1[index1++];
        else
        arr[mainArrayIndex++]=arr2[index2++];
    }

    while(index1<l1){
      arr[mainArrayIndex++]=arr1[index1++];
    }
    while(index2<l2){
      arr[mainArrayIndex++]=arr2[index2++];
    }
     
    delete []arr1;
    delete []arr2;

}
void mergesort(int *arr, int s, int e){
    //base case
    if(s>=e)
    return;

    int mid= (s+e)/2;
//RECURSIVE RELATION

    //left part sort karenge
    mergesort(arr, s, mid);
    //right part ko sort karenge
    mergesort(arr, mid+1, e);
    
    //dono part ko merge kardenge
    merge(arr, s, e);
}
void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={8,4,6,9,0,4};
    int n=6;

    mergesort(arr, 0, n-1);
    print (arr, n);

    return 0;
}