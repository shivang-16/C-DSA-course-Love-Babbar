#include<iostream>
using namespace std;

int getMin(int num[], int n){
        int min = INT_FAST32_MAX;

        for(int i=0; i<n; i++){
         if(num[i]<min){
            min = num[i];
         }
        }
        return min;
    }
   
       int getMax(int num[], int n){
        int max= INT_FAST32_MIN ; 
    
         for(int i=0; i<n; i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}
    

     int main(){
        int size;
        cin>>size;

        int num[100];

        //TAKING INPUT IN ARRAY
        for(int i=0; i<size; i++){
            cin>>num[i];
        }

        cout <<"Maximum Value is"<< getMax(num, size) <<endl;
        cout <<"Manimum Value is"<< getMin(num, size) <<endl;

     }
    