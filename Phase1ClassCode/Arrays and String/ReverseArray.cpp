#include<iostream>
using namespace std;

void reverse(int arr[], int n){

    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={5,8,6,-45,8,9};
    int brr[5]={5,89,65,8,-5};

    //Calling Reverse function
    reverse(arr, 6);
    reverse(brr, 5);

    //calling print function
    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}

//CODE FOR REVERSE ARRAY IN VECTOR
/*
 vector<int>reverse(vector<int>v){
     int s=0, e=v.size()-1;
     while(s<=e){
        swap(v[s], v[e]);
        s++;
        e--;
     }
     return v;
 }
 void Print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
 }
 int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int>ans= reverse(v);
    Print(ans);

    return 0;
 }
 */