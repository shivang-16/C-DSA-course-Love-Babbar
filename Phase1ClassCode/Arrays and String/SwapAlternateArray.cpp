#include<iostream>
 using namespace std;
void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
           
           //INSTEAD OF SWAP WE CAN WRITE THIS
           /* int variable=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=variable;*/ 
        }
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int even[8]={1,0,3,5,6,9,7,8};
    int odd[5]={11,33,76,43,92};
    
    swapAlternate(even, 8);
    swapAlternate(odd, 5);

    printArray(even, 8);
    printArray(odd, 5);

return 0;
}

