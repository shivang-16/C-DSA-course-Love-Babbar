#include<iostream>
#include<vector>
using namespace std;

vector<int>rotateArray(vector<int>v, int k){

    vector<int>temp(v.size());
    for(int i=0; i<v.size(); i++){
        temp[(i+k)%v.size()] =v[i];//temp ke andar sari value store ho chuki hongi isliye bad m sari value ko v m copy karna padega
    }
    //copy temp into v vector
    v= temp;
    return v;
}
void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(8);
   int k;
   cin>>k;
    vector<int>ans= rotateArray(v,k);
    print(ans);

}