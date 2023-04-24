#include<iostream>
using namespace std;

int main(){
   /* int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }*/
    
     //BUTTERFLY PATTERN

           int n;
            cin>>n;
            int i=0;
            while(i<n){
                int j=0;
                while(j<(2*n)){
                if(j<=i){
                cout<<"*";
                }
                else{cout<<" ";}
                if(i >= (2 * n - 1) - j){
                    cout<<"*";
                }
                else{cout<<" ";}
                j++;
                }
               
                i++;
                cout<<endl;
            }
            int a=0;
            while(a<n){
            int k=0;
            while(k<(2*n)){
            if(a + k <= n - 1)  // bottom left triangle
            cout << "*";             
            else
                cout << " ";
            if((a+ n) <= k)  // bottom right triangle
                cout << "*";
            else
                cout << " ";
                k++;
                    }
                    a++;
                    cout<<endl;
                }
         /*   
            int a=1;
            while(a<=n){
                int b=n-a+1;
                while(b){
                    cout<<"*";
                    b--;
                }
                cout<<endl;
                a++;
            }
    

            
            
            }
             int i, j, n;
    cin >> n;
    // upper half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i >= j) // upper left triangle
                cout << "*";
            else
                cout << " ";
            if(i >= (2 * n - 1) - j)  // upper right triangle
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }*/
}