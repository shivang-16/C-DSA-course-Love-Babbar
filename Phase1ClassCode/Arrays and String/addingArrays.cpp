#include<iostream>
#include<vector>
using namespace std;

vector<int>reverse(vector<int>v){
    int s=0, e=v.size()-1;
    while(s<e){
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int>ArraySum(vector<int>a, int n, vector<int>b, int m){
    int i=n-1, j=m-1;//loop ko piche se start karenge(since we start addition from last)
    int carry=0;//carry ko intialise kr liya
    vector<int>ans; 

    while(i>=0 && j>=0){//process contine within the loop
    int val1=a[i], val2=b[j];
    int sum= val1 + val2 + carry;
    carry= sum/10;
    sum= sum%10;
    ans.push_back(sum);
    i--; j--;
    }
    
    //First case ->When first array is bigger size
    while(i>=0){
        int sum=a[i]+carry;
        carry= sum/10;
        sum= sum%10;
        ans.push_back(sum);
        i--;
     }
     //Second case ->When second array is bigger size
     while(j>=0){
        int sum=b[j]+carry;
        carry= sum/10;
        sum= sum%10;
        ans.push_back(sum);
        j--;
    }
    //third case-> When there is carry in last
    while(carry!=0){
        int sum=carry;
        carry= sum/10;
        sum= sum%10;
        ans.push_back(sum);
    }

return ans;
}
void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
int main(){
     vector<int>v1;
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(6);
    v1.push_back(8);

     vector<int>v2;
    v2.push_back(9);
    v2.push_back(2);
    
   vector<int>ans=ArraySum(v1, 4, v2, 2);
  
   print(reverse(ans));
   
}