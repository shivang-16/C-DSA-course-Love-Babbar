#include<iostream>
using namespace std;

 void update(int **p2){
//one by one sare case execute krke dekhna hai

//CASE 1->
      p2=p2+1;
          //kuch change hoga main finction m--> No change in this case (FOR UNDERSTANDING REFERS TO NOTES)

//CASE 2->
    //*p2=*p2+1;
          //kuch change hoga --> Yes (adrress which is stores in p(i.e address of i) will change)

//CASE 3->
      //**p2=**p2+1;
           //kuch change hoga --> Yes (Value of i will be increase by 1)
 }

 int main(){
    int i=5;
    int* p =&i;
    int** p2=&p;

    cout<<endl<<"before "<< i <<endl;
    cout<<"before "<< p <<endl;//address of i
    cout<<"before "<< p2 <<endl<<endl;//address of p

    update(p2);

    cout<<"after "<< i <<endl;
    cout<<"after "<< p <<endl;
    cout<<"after "<< p2 <<endl<<endl;
 }