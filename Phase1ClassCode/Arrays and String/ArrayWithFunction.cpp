#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout <<"Printing the array"<<endl;
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing DONE"<<endl;
}
int main(){
    
    int first[15]={2,7};
    printArray(first, 15);
    
    
    int second[20]={5};
    printArray(second, 20);

}