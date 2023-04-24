#include<iostream>
#include<vector>
using namespace std;
//Q. Move all the zeros in the array to the right and put non zero digit in left in same order as given
// Approach-> Traverse the array and if zeros are found then ignore, if non zero digit found then swap it with zero before it. 
vector<int> movesZeros(vector<int>v){
    int nonZero=0;
    for(int j=0; j<v.size(); j++){//Traversing the arary
        if(v[j] != 0){
            swap(v[j], v[nonZero]);
            nonZero++;
        }
    }
    return v;
}
void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(0);
    v.push_back(12);
    v.push_back(8);
   
    vector<int>ans= movesZeros(v);
    print(ans);

}