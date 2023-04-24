#include<iostream>
using namespace std;

//QUICK SORT
/*
int partion(int *arr, int s, int e){
    int pivot =arr[s];
    int count=0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<pivot){
            count ++;
        }
    }
    int pivotIndex= s+count;
    swap(arr[pivotIndex], arr[s]);

    int i=s, j=e;
    while(i< pivotIndex && j> pivotIndex){
        while(arr[i]< pivot){
            i++;
        }
        while(arr[j]> pivot){
            j--;
        }
        if(i< pivotIndex && j> pivotIndex)
          swap(arr[i], arr[j]);
        }
        return pivotIndex;
}

void quicksort(int *arr, int s , int e){
    //base case
    if(s>=e)
    return ;

    int p= partion(arr, s, e);

    quicksort(arr, s, p);
    quicksort(arr, p+1, e);
}

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={8,4,6,9,0,4};
    int n=6;

    quicksort(arr, 0, n-1);
    print (arr, n);

    return 0;
}*/


//MERGE SORT
void merge(int *arr, int s, int e){
    int mid= (s+e)/2;
    int l1= mid-s+1;
    int l2= e-mid;

    int *arr1 = new int[l1];
    int *arr2 = new int[l2];
    
    int mainArrayIndex=s;
    for(int i=0; i<l1; i++){
        arr1[i]= arr[mainArrayIndex++];
    }

    mainArrayIndex=mid+1;
    for(int i=0; i<l2; i++){
        arr2[i]= arr[mainArrayIndex++];
    }

    //merge 2 sorted array
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
    

}
void mergesort(int *arr, int s, int e){
    //base case
    if(s>=e)
    return;

    int mid= (s+e)/2;

    mergesort(arr, s, mid);
    mergesort(arr, mid+1, e);

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