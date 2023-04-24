#include<iostream>
using namespace std;
#define R 5
#define C 5

bool search2D( int arr[R][C], int key){
      int rowIndex=0, colIndex= C-1;

      while(rowIndex<R && colIndex>=C){
        int element = arr[rowIndex][colIndex];
        if(element == key){
         return 1;
        }
        if(element < key){
          rowIndex++;
        }
        else{ 
          colIndex--;
      } 
      return 0;
    }
}
int main(){
    int arr[5][5]={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int key;
    cout<<"Enter the number to search "<<endl;
    cin>>key;
 
    if(search2D(arr, key)){
    cout<<"Element is Present "<<endl;
    }
    else{
    cout<<"Element not present "<<endl;
    }
    
}
