#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid= s + (e-s)/2;
    int ans=-1;
   
   while(s<=e){
    if (arr[mid]==key){
    ans = mid;
    e = mid-1;
    }
    else if(key>arr[mid]){
    //Right part me jana hai
    s= mid+1;
    }
    else if(key<arr[mid]){
    //Left part m jana hai
    e = mid-1;
    }
    mid= s + (e-s)/2;
   }
   return ans;
}

int LastOcc(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid= s + (e-s)/2;
    int ans=-1;
   
   while(s<=e){
    if (arr[mid]==key){
    ans= mid;
    s = mid+1;
    }
    else if(key>arr[mid]){
    s= mid+1;
    }
    else if(key<arr[mid]){
    e = mid-1;
    }

    mid= s + (e-s)/2;
   }
   return ans;
}

int main(){
      
      int even[13]={1,3,3,3,3,3,3,3,3,3,3,3,8};
      cout<< " First Occurence of 3 is at Index "<< firstOcc(even, 13, 3)<<endl;
      cout<< " Last Occurence of 3 is at Index "<< LastOcc(even, 13, 3)<<endl;

      
  return 0;
}