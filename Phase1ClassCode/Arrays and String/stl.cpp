//STL(strandard templete library) IN ARRAY
#include<iostream>
#include<array>
using namespace std;
int main(){

   array<int, 4> a = {1,2,8,9 };
   int size= a.size();
   cout<<"size of array is "<<size<<endl;
   for(int i=0; i<size; i++){
    cout<<a[i]<<" ";
   }
   cout<<endl;
   cout<<"Element at 2nd Index "<< a.at(2)<<endl;
   cout<<"Empty or not--> "<< a.empty()<<endl;
   cout<<"First element--> "<< a.front()<<endl;
   cout<<"Last element --> "<< a.back()<<endl;
   
}
