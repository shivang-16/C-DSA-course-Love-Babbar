#include<iostream>
using namespace std;
int main(){
      int arr[5]={1,2,3,4,5};
      cout<<arr<<endl;//yaha par address print hoga

     char ch[6]="abcde";//6 isliye hai because null character be aayega last m
     cout<<ch<<endl;//yaha par address print ni hoga, abcde hi print hoga because cout function in integer array and char array is different inplemented  

     char *c = &ch[0];
     cout<< c <<endl;/*since implementation of cout is diffferent in int and char array so here abcde will 
                      be printed but if there is int arr here then address will be printed*/

      char temp= 'z';
      char *p = &temp;
      //char *p= "abcde"; -> RISKY (never do that)
       cout<<p<<endl;

       return 0;
}