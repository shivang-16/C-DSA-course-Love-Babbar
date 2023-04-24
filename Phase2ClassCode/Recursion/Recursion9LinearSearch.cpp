#include<iostream>
using namespace std;
bool linearSearch(int arr[], int n, int key){
    //base case
    if(n==0){
        return false;
    }
    if(arr[0]== key){
    return true;
    }
    else{
    bool remaining= linearSearch(arr+1, n-1, key);
    return remaining;
    }
}
int main(){
    int arr[5]= {3,4,2,6,7};
    int key=8;
    if(linearSearch(arr, 5, key)){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"key is absent";
    }

    return 0;
}