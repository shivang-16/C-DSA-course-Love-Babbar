#include<iostream>
using namespace std;
int partion(int *arr, int s, int e){
      int pivot= arr[s];
      int count=0;
      for(int i=s+1; i<=e; i++){
         if(arr[i]<=pivot)
          count++;
      }
      
      //place pivot at right index
      int pivotIndex= s+count;
      swap(arr[pivotIndex], arr[s] );


      //now left and right part ko sambhalte hai
      int a=s, b=e;
      while(a<pivotIndex && b>pivotIndex){
          while(arr[a]<pivot){
            a++;
          }
          while(arr[b]>pivot){
            b--;
          }

          if(a<pivotIndex && b>pivotIndex){
           swap(arr[a++], arr[b--]);
        }
      }
      return pivotIndex;

}
void quickSort(int *arr, int s , int e){
    //base case
    if(s>=e)
    return ;

    //call partion function
    int p = partion(arr, s, e);

    //RECURSIV CALL
      //sorting left part
      quickSort(arr, s, p);

      //sorting right part
      quickSort(arr, p+1, e);


}
void Print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={3,2,8,1,5,6};
    int n=6;
    quickSort(arr, 0, n-1);
    Print(arr, n);

}