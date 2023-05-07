#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<int>firstNegativeInK(vector<int>&arr, int n, int k){
    
    deque<int> dq;
    vector<int>ans;
    
    //step 1-> Process for first k size window
     for(int i= 0; i<k; i++){
        if(arr[i] < 0)//i.e negative number=> push in dq
          dq.push_back(i);
        }
      //now store ans;
      if(dq.size() > 0)
      ans.push_back(arr[dq.front()]);
      else
      ans.push_back(0);

    //step 2-> Process for remaning windows
     for(int i=k; i<n; i++){
        //removal
        if(i - dq.front()>= k)
        dq.pop_front();
        
        //addition
        if(arr[i] < 0)//i.e negative number=> push in dq
        dq.push_back(i);
         
     //now store ans;
      if(dq.size() > 0)
      ans.push_back(arr[dq.front()]);
      else
      ans.push_back(0);

     }  
    
   return ans;   
}

int main(){
      vector<int>v;
      v.push_back(-8);   
      v.push_back(2);   
      v.push_back(3);   
      v.push_back(-6);   
      v.push_back(10);

      int k; 
      cout<<"Enter the window size: "<<endl;
      cin>>k;   

    vector<int> ans = firstNegativeInK(v, v.size(), k);

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
   
    return 0;
     
      
}
