#include<iostream>
using namespace std;

void sort(int *arr, int n){
  //base case
  if(n==0||n==1)
  return;

  //1 case solve kro
  for(int i=0; i<n-1; i++ ) {
    swap(arr[i], arr[i+1]);
  }
   //recursive call
   sort(arr, n-1);
}
void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={4,6,3,2,0};
    sort(arr,5);
    print(arr, 5);

    return 0;

}