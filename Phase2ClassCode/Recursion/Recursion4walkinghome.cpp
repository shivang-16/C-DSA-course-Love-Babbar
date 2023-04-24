#include<iostream>
using namespace std;
void reachHome(int source, int destination){

    cout<<"Source "<<source<<" Destination "<<destination<<endl;

    //Base case
    if( source == destination){
        cout<<"Pahuch gya ghr "<<endl;
        return ;
    }

    //Processing-> Ek step aage badh jao
    source++;

    //Recursive call
    reachHome(source, destination);
}

int main(){
    int destination= 10;
    int source = 1;

    cout<<endl;
    reachHome(source, destination);

    return 0;
}