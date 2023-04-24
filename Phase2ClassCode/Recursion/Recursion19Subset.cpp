#include<iostream>
#include<vector>
using namespace std;



vector<vector<int>> subset(vector<int>& arr){
       vector<vector<int>>ans;
       vector<int> output;
       int index=0; 
       solve(arr, output, index, ans);
       return ans;
}