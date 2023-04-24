#include<iostream>
using namespace std;

bool search (int arr[], int size, int key){

    for(int i=0; i<size; i++){
        if (arr[i]==key){
            return 1;
    }
    }
      return 0;
}

int main(){
     int arr[10]={5,6,7,-5,-6,8,65,45,-55,65};
     cout<<"Enter the element to search for"<<endl;
     int key;
     cin>>key;

     bool found = search(arr,10,key);
     if (found)
     cout<<"Key is present"<<endl;
     else
     cout << "Key is absent"<<endl;
}