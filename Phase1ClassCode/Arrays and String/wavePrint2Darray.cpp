#include<iostream>
using namespace std;
#define R 3
#define C 3
int wavePrint(int arr[R][C]){
    for(int col=0; col<C ; col++){
        if(col&1){
        //odd index case---> Bottom to Top
        for(int row= R-1; row>=0; row--){
             cout<<arr[row][col]<<" ";
        }
        }
        else{
            //even or 0 index--> top to bottom
            for(int row=0; row<R; row ++){
                cout<<arr[row][col]<<" ";
            }
        }
    }
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    wavePrint(arr); 
}