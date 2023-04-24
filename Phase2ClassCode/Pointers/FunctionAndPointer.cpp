#include <iostream>
using namespace std;
void print(int *p){
    cout << p << endl; //print adress
    cout << *p << endl << endl; //print value
}
void updateAddress(int *p){
    p = p + 1;
}
void updateValue(int *p){

    *p = *p + 1;
}

int main(){
    int i = 5;
    int *p = &i;
    print(p);

    cout << "before address: " << p << endl;
    updateAddress(p);
    cout << "after address: " << p << endl<<endl; 
     /*(before and after dono same ans aayega because humne p(address) ko update kiya h par print
     karne hum dobara main vale function mein aagye hai, agar hum update vale function
     me hi cout<<p; kar denge to p update ho jayega ->"smajne ke liye vala code dekho"<-)*/
// but i update ho sakta hai
    cout << "before value: " << *p << endl;
    updateValue(p);
    cout << "after value: " << *p << endl;
}


/*void print(int *p){
    cout<<p<<endl;
    }
void updateAdrress(int *p){
    p=p+1;
   cout<<p<<endl;//--> isi ki upar bat ki thi
}

int main(){
     int i = 5;
     int *p = &value;
     print(p);

     cout<<"before: "<<p<<endl;
     cout<<"after: ";
     updateAdrress(p);

}*/