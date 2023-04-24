#include<iostream>
#define R 3
#define C 3
using namespace std;

int binarySearch( int arr[R][C], int key){
    int s=0,e=R*C-1, mid= s+(e-s)/2;
 
        while(s<=e){
            int element=arr[mid/C][mid%C];
            if(element==key){
                return mid; 
            }
            if(key>element){
                s= mid+1;
            }
            else{
                e=mid-1;
            }
            mid= s+(e-s)/2;
        }
        return -1;
    }

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int key;
    cin>>key;
    cout<<<"Index "<binarySearch(arr, key);
}