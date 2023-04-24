#include<iostream>
#include<vector>
using namespace std;
/*
//below code is not purly correct (give wrong ans for some test case)
//CODE FOR REVERSE ARRAY (REVERSE AFTER A CERTAIN INDEX SAY m)
void reverseArray(int arr[], int n, int m ){
   
   //shifting start after m(i.e index after which you want to reverse code)
    int s=m+1, e=n-1;
    for(int i=m+1; i<n; i++ ){ 
        
       swap(arr[s++],arr[e--]);
        
    }
}
void printArray(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[9]={10,4,5,2,3,6,1,3,6};
    //Input index after which you want to reverse the array
    int m;
    cin>>m;
    reverseArray(arr, 9, m);
    printArray(arr, 9);
}
*/


//CODE IN VECTOR  --> correct working

vector<int>reverse(vector<int> & arr, int m){
    int s=m+1, e = arr.size()-1;
    for(int i=m+1; i<e; i++){
           
        swap(arr[s++],arr[e--]);
    }
    return arr;
}
void print(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(4);
    v.push_back(5);
    v.push_back(2);
    v.push_back(3);
    v.push_back(6);
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
   
    //Input index after which you want to reverse the array
    int m;
    cout<<"Input index after which you want to reverse the array "<<endl;
    cin>>m;

    vector<int>ans= reverse(v, m);
    print(v);

    return 0;
}

