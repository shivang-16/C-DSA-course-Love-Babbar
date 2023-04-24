#include<iostream>
using namespace std;
bool Sorted(int arr[], int n){
   //base case
   if(n==0 || n==1)
   return true;
   
   if(arr[0] > arr[1]){
   return false;
   }
   else{
   bool remaining= Sorted(arr+1, n-1);
   return remaining;
   }

  
}
int main(){
   int arr[5]={1,2,3,4,5};
  
   if(Sorted(arr, 5)){
      cout<<"Array is sorted"<<endl;
   }
   else{
      cout<<"Array is not sorted"<<endl;
   }
   return 0;

}