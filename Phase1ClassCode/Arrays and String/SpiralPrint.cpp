/*#include<iostream>
#include<vector>
using namespace std;

vector<int>spiralOrder(vector<vector<int>>&matrix){
    vector<int>ans;
    int row= matrix.size();
    int col= matrix[0].size();

    int count =0;
    int total = R*C;

    //index intialisation
    int startingRow=0;
    int startingCol=0;
    int endingRow=R-1;
    int endingCol=C-1;

    while(count<total){
        //Print starting row
        for(int index=startingCol; cout< total && index <= endingCol; index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;
     
     //Print ending col
        for(int index=startingRow; cout< total && index <= endingRow; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
    } 
         endingCol--;

    //Print ending row
        for(int index=endingCol; cout< total && index <= startingCol; index++){
            ans.push_back(matrix[endingRow][index]);
            count++;
     }
     endingRow--;

     //Print starting col
        for(int index=endingRow; cout< total && index = startingRow; index++){
            ans.push_back(matrix[index][startingCol]);
            count++;
    }
    startingCol++;
    }
    return ans;
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    spiralOrder(arr);
}
*/

#include <iostream>
using namespace std;
#define ROW 3
#define COL 3

void dispSpiral(int arr[ROW][COL], int m, int n){
   int i, currRow = 0, currCol = 0;
   while (currRow < ROW && currCol < COL){
      for (i = currCol; i < n; i++){ //print the first row normally
      cout << arr[currRow][i]<<" ";
   }
   currRow++; //point to next row
   for (i = currRow; i < m; ++i){ //Print the last column
      cout << arr[i][n-1]<<" ";
   }
   n--; //set the n-1th column is current last column
  // if ( currRow < m){ //when currRow is in the range, print the last row
      for (i = n-1; i >= currCol; --i){
         cout << arr[m-1][i]<<" ";
      }
      m--; //decrease the row range
   
 //  if (currCol < n){ //when currCol is in the range, print the fist column
      for (i = m-1; i >= currRow; --i){
         cout << arr[i][currCol]<<" ";
      }
      currCol++;
   }
   }

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9,};
   dispSpiral(arr, 3, 3);
}