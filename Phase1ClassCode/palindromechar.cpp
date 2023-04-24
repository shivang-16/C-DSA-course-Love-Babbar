#include<iostream>
using namespace std;

char toLowercase(char ch){//if we do not create this function then program will become case sensetive
  if(ch>='a' && ch<='z'){
    return ch;
  }
  else{
    char temp = ch - 'A' + 'a'; //game of ASCII TABLE is going on here [see in notebook]
    return temp;
  }
}
int getLength(char word[]){//In char array we dont have to put the size in function unlike in int array
  int count=0;
  for (int i =0; word[i] != '\0'; i++){
    count++;
  }
 return count;
}

bool checkPalindrome(char a[], int n){
  int s =0, e=n-1;
  while(s<=e){
    if (toLowercase(a[s]) != toLowercase(a[e])){
      return false;
    }
    else{
      s++; e--;

    }
  }
  return true;
}

int main(){
char word[20];
    cout<<"Enter word "<<endl;
    cin>> word;
    int length= getLength(word);
  cout<<"Palindrome or not: "<<checkPalindrome(word, length )<<endl;
}