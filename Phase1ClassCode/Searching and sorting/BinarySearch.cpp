#include<iostream>
#include<vector>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start =0;
    int end= size-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(arr[mid]==key)
        return mid;
       
       //Go to right part
        if(key>arr[mid])
        start=mid+1;
        else
        end=mid-1;

     mid= (start+end)/2;
    }
    return -1;
}
int main(){
    
    int even[6]={4,6,8,20,45,88};
    int odd[50]={0,6,75,9,2};
    
    int evenIndex = binarySearch(even, 6, 88);
    cout<< "INDEX OF 20 IS:"<<  evenIndex <<endl;

    int oddIndex = binarySearch(odd, 5, 6);
    cout<< "INDEX OF 20 IS:"<<  oddIndex <<endl;
    return 0;

}

/*
//code in vector -> NOT WORKING
vector<int>binarySearch(vector<int>v, int key){
    int s=0, e=v.size()-1, mid= s+(e-s)/2;
    while(s<e){
        if(v[mid]==key){
            return mid;
        }
        else if(key>v[mid]){
            s++;
        }
        else{
            e--;
        }

        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(9);
    v.push_back(10);
    int key;
    cin>>key;

    int ans=binarySearch(v, key);
    if (ans == -1){
        cout << "Your result is not found ! ";
    }
    else{
        cout << "Your result is in the index: " << ans;
    }
    return 0;
}
*/
