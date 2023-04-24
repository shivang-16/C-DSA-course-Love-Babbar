#include<iostream>
using namespace std;

   //int getSum(int arr[], int n){
 int getSum(int *arr, int n ){//Jab hum koi function k andar array pass krte hai to vo array pass ni hota actually m pointer pass hota h
    
    //cout<<endl<<"Size--> " <<sizeof(arr) <<endl;
            /*if will give the size of the pointer(generally 8 byte) not the array because function m jab bhi 
            array pass karte hai to array ni pointer pass hota h actually m*/
    
    
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i]; // or i[arr]; //because we know (arr[i] = *(arr + i)) so chahe dono me se kuch bhi likh lo same hi hai
    }
    return sum;
}

int main(){
    int arr[6]={0,2,3,4,6,8};
    cout<<"Sum of array-> "<<getSum(arr , 6)<<endl;
    cout<<"Sum of last 3 digit of array -> "<<getSum(arr+3 , 3)<<endl<<endl;/*in this case array will start from 
                                                                              after 3 digit thats why the length 
                                                                              of array is 3*/
}