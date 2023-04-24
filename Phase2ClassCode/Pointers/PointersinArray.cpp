#include<iostream>
using namespace std;
int main(){
    /*int arr[10]={23,122,41,67};

    //first memory block address in array can be printed by name of array
    cout<<"Address of first memory block in array "<<arr<<endl;

    cout<<"Address of first memory block in array "<<&arr[0]<<endl;
    cout<<"Address of second memory block in array "<<&arr[1]<<endl;

    cout<<"1-> "<<*arr<<endl;//print the value present in first memory block in the array
    cout<<"2-> "<<*arr + 1<<endl;//value of first location + 1;
    cout<<"3-> "<<*(arr + 1)<<endl;//it will show value at first location 
    cout<<"4-> "<<*(arr)+1<<endl;//same as line no. 13
    cout<<"5-> "<<arr[2]<<endl;
    cout<<"6-> "<<*(arr+2)<<endl;//line 16 and 17 are same

    cout<<3[arr]<<endl;//we can also write arr[3] as 3[arr] 
*/

 /*
     int temp[10];
     cout<<"1-> "<<sizeof(temp)<<endl;
     cout<<"2-> "<<sizeof(*temp)<<endl;//*temp gives the value at first block
     cout<<"3-> "<<sizeof(&temp)<<endl;//address of Ist location

     int *ptr=&temp[0];
     cout<<"3-> "<<sizeof(ptr)<<endl;//gives the address(generally size of pointer is 8 byte) 
     cout<<"4-> "<<sizeof(*ptr)<<endl;//it will give the size of value at address
*/

      
  /*    int a[20]={1,2,3,5};
      cout<<"1-> "<< &a[0]<<endl;//adress of block at zeroth index
      cout<<"2-> "<< &a <<endl;
      cout<<"3-> "<< a <<endl<<endl;
      //All 3 codes above gives same output
    
      int *p=&a[0];
      cout<<"4-> "<< p <<endl;//gives the address of element which was stores in p
      cout<<"5-> "<< *p <<endl;// gives  the value present at the address
      cout<<"6-> "<< &p <<endl;//gives the address of the p(thiis the adress of the p that's what it is different from  4th point address)
*/


      int arr[10];
      //arr= arr+1; ->It will give error because array ka address reassign ni kar sakte memory 
      
      int *ptr= &arr[0];
      cout<<"Before-> "<<ptr<<endl;
      ptr=ptr+1;//isko karne se ptr next block pe chla jayega (i.e in case of int it will increase by 4 )
      cout<<"After-> "<<ptr<<endl;
}