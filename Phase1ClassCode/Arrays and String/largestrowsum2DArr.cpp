#include<iostream>
using namespace std;

int findMaxRow(int arr[][3], int row, int col) {
   int maxSum = -1, rowIndex=-1;
    for (int row = 0; row < 3; row++) {
      int sum = 0;
      for(int col = 0; col < 3; col++){
         sum += arr[row][col];
      }
      if(sum > maxSum){
         maxSum = sum;
         rowIndex = row;
      }
   }
   cout<< "the maximum sum is "<< maxSum<<endl;
   return rowIndex;
}
int main() {
     int arr[3][3]={3,4,11,2,12,1,7,8,7};
     
     int ansIndex = findMaxRow(arr,3,3);
     cout<<"row is at index "<< ansIndex<<endl;
   return 0;
}