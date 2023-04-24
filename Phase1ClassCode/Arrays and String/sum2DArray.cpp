#include<iostream>
using namespace std;
 
 //Row wise printing sum
 void printSum(int arr[][3], int row, int col){
    for(int row=0; row<3; row++){
        int sum =0;
        for (int col=0; col<3; col++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
 }

 //col wise printing sum
 void printSum1(int arr[][3], int row, int col){
    for(int col=0; col<3; col++){
        int sum =0;
        for (int row=0; row<3; row++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
 }
 int main(){
    int arr[3][3]={3,4,11,2,12,1,7,8,7};
    cout<<"Row Wise sum "<<endl;
    printSum(arr, 3, 3);
    cout<<endl;
    cout<<"Col Wise sum "<<endl;
    printSum1(arr, 3, 3);

 }

 