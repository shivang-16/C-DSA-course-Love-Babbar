#include<iostream>
#include<vector>
using namespace std;

void reverse(char word[], int n){
    int s=0, e=n-1;
    while(s<e){
        swap(word[s],word[e]);
        s++;
        e--;
    }
}
int getLength(char word[]){//In char array we dont have to put the size in function unlike in int array
  int count=0;
  for (int i =0; word[i] != '\0'; i++){
    count++;
  }
 return count;
}


int main(){
char word[20];
    cout<<"Enter word "<<endl;
    cin>> word;
    int length= getLength(word);
    reverse(word, length);
    cout<<word;
}

