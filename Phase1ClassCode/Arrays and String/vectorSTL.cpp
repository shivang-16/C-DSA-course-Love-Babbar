#include<iostream>
//INCLUDING VECTOR STL
#include<vector>
using namespace std;

int main(){
  
  //creating vector if size not known
  vector<int> v;
  cout<<"Capacity--> "<<v.capacity()<<endl;
   cout<<"Size--> "<<v.size()<<endl;
  
 /*
   // if size of vector already known
  vector<int> a(5,1); //5 is the size of vector and intializing with 1
   cout<<"Print a"<<endl;
  cout<<"Size--> "<<a.size()<<endl;

   for(int i:a){
    cout<<i<<" ";
    }
  */   
     cout<<endl;

  
  //pushing element in vector
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  for(int i=0; i<v.size(); i++){
  cout<<v[i]<<" ";
  }
  cout<<endl;
   
   cout<<"front "<<v.front()<<endl;
   cout<<"back "<<v.back()<<endl;


}
