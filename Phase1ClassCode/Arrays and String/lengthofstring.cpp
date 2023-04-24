#include<iostream>
using namespace std;

int getLength(char name[]){//In char array we dont have to put the size in function unlike in int array
  int count=0;
  for (int i =0; name[i] != '\0'; i++){
    count++;
  }
 return count;
}

int main(){
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>> name;
    cout<<"Length--> "<<getLength(name)<<endl;
    return 0;
}