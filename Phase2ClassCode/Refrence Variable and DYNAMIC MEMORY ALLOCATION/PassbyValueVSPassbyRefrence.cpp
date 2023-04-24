#include<iostream>
using namespace std;

//CASE 1->(PASS BY VALUE)
void update1(int n){/*Pass by value function->(creates copy in update funtion(new memory block created) i.e any 
                     change we do is done on the copy not on the orginal variable which is in main function)*/
    n++;
}

//CASE 2->(PASS BY REFRENCE)
void update2(int& n){/*Pass by refrence function->(here a refrence variable is created in update function which 
                      denote the original memory block in main function i.e any change we do on 
                      variable is done on the main function)*/
     n++;
}

/*CASE 3->(RETURN BY REFRENCE) This case is bad practice (never do) because num, ans are local variable of function to jaise hi function
           vla block khtm hoga to memory clear ho jayegi to pass(function call) krne ka to koi case hi ni banta h yaha pe
           (Same problem with pointer also)*/
int& func(int a){
    int num = a;
    int& ans = num;
    return ans;
}
 
int main(){
    int n=5;
    cout<<"Before-> "<<n<<endl;
    update1(n);
    cout<<"After: "<<endl;
    cout<<"Update1function-> "<<n<<endl;//no change occur
    update2(n);
    cout<<"Update2function-> "<<n<<endl;//increase by 1

    //func(n);
}