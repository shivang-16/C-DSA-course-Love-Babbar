#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(int arr[], int n){
      for(int i=1; i<n; i++){
        //for round 1--->(n-1)
        for(int j=0; j<n-i; j++)
        //process element till n-i
        if( arr[j]>arr[j+1]){ 
            swap(arr[j], arr[j+1]);
        }
      }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[8]={54,8,26,0,14,5,98,5};
    bubbleSort(arr, 8);
    printArray(arr, 8);
}

/*
//Code in Vector
vector<int>sort(vector<int>v){
      for(int i=1; i<v.size()-1; i++){
        //for round 1--->(n-1)
        for(int j=0; j<v.size(); j++)
        //process element till n-i
        if( v[j]>v[j+1]){ 
            swap(v[j], v[j+1]);
        }
      }
      return v;
}
void printArray(vector<int>v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> v;
     v.push_back(0);
    v.push_back(6);
    v.push_back(1);
    v.push_back(5);
    v.push_back(2);

  vector<int>ans = sort(v);
  printArray(ans);
}
*/