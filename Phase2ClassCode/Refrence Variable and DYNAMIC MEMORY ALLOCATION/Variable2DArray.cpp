#include<iostream>
using namespace std;
int main(){
    int row, col;
    cin>>row>>col;

    //creating 2D Array
    int** arr= new int*[row];//creating rows jisme pointers pade hue hai
    for(int i=0; i<row; i++){
        arr[i]= new int[col];//creating columns corresponding to each row
    }

    //now taking input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>> arr[i][j];
        }
    }

    cout<<endl;
    //output
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
}

 //RELEASING MEMORY
 for(int i=0; i<row; i++){
    delete [] arr[i];
 }
    delete []arr;

 return 0;
}