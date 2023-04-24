#include<iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
     
     int i=0, j=0;
     int k=0;

//Approach -> Dono array ke elements to ek ek karke compare karenge aur jo chota hoga uske arr3 m store karate chalenge.
     while(i<n && j<m){
       if(arr1[i]<arr2[j]){
         arr3[k++]= arr1[i++];
       }
       else{
          arr3[k++]= arr2[j++];
       }
     }

     //if 1st array bada h 2nd se to ye case applicable hoga 
     // copy remaining elements of arr1 in arr3
     while(i<n){
        arr3[k++]=arr1[i++];
     }

     //if 2nd array bada h 1st se to ye case applicable hoga 
     // copy remaining elements of arr2 in arr3
     while(j<m){
        arr3[k++]= arr2[j++];
     }
}
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr1[5]={1,4,6,7,9};
    int arr2[4]={2,3,5,8};
    int arr3[9] = {0};
    
    merge(arr1, 5, arr2, 4, arr3);
    print(arr3, 9);

    return 0;
}