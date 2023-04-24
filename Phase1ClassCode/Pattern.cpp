#include<iostream>
using namespace std;
 int main(){
    /* int n;
     cin>> n;
      int i = 1;
       while(i<=n){
           int j = 1;
           while(j<=n){
            cout << "*";
            j=j+1;
           }
           cout << endl;
           i=i+1;
       }
    

   int n;
   cin>>n;
    int i=1;
     while(i<=n){
        int j = 1;
        while(j<=n){
            cout << i;
            j=j+1;

        }
        cout << endl;
        i= i +1;
     }
     

     int n;
     cin>>n;
      int i =1;
      while(i<=n){
         int j = 1;
         while (j<=n){
            cout <<"(";
            j=j+1;
         }
         cout<< endl;
         i=i+1;
      }  
      
      int k=1;
      while(k<=1){
        int l=1;
        while (l<=n){
            cout<<"*";
            l=l+1;

        }
        cout<<endl;
        i=i+1;
      }  
 
 
        int n;
        cin>>n;
        
        int i=1;
        while(i<=n){
            int j=1;
            while(j<=n){
                cout<<j;
                j=j+1;
            }
            cout<<endl;
            i=i+1;
        }
 

          int n;
          cin>>n;

          int i=1;
          while(i<=n){
            int j=1;
            while(j<=n){
                cout<< n-j+1;
                j=j+1;
            }
            cout<< endl;
            i=i+1;
          }
          

         int n;
         cin>>n;
          int i=1;
          int count=1;
          while(i<=n){
            int j=1;
            while(j<=n){
                cout<< count <<" ";
                count=count+1;
                j=j+1;
            }
            cout<<endl;
            i=i+1;
          }
 
 
           int n;
           cin>>n;
           int i=1;
           while(i<=n){
            int j=1;
            while(j<=i){
            cout << "*" ;
            j=j+1;
            }
            cout<<endl;
            i=i+1; 

           }
 

           int n;
           cin>>n;
           int i=1;
           while(i<=n){
            int j=1;
            while(j<=i){
              cout<< i;
              j=j+1;
            }
            cout<<endl;
            i=i+1;
           }          
          

         
         int n;
         cin>>n;
          int i=1;
          int count=1;
          while(i<=n){
            int j=1;
            while(j<=i){
            cout<< count << " ";
            count =count+1;
            j=j+1;
          }
          cout<<endl;
          i=i+1;
 }
 

            int n;
            cin>>n;
             int i=1;
             
             while(i<=n){
              int j=1;
              int count=i;
              while(j<=i){
                cout<<count<<" ";
                count=count+1;
                j=j+1;

              }
              cout<<endl;
              i=i+1;
             }

 
         int n;
         cin>>n;

         int i=1;
         while(i<=n){
          int j=1;
          int value = i;
          while(j<=i){
           cout<< value;
           value = value-1;
           j=j+1;
          }
          cout<<endl;
          i=i+1;
         }


          int n;
         cin>>n;

         int i=1;
         while(i<=n){
          int j=1;
          
          while(j<=i){
           cout<< i-j+1<<" ";
           
           j=j+1;
          }
          cout<<endl;
          i=i+1;
         }
    
        
        int n;
        cin>>n;
        int row=1;
       
        while(row<=n){
          int col = 1;
           
          while(col<=n){
            char ch= 'A'+row-1;
            cout<< ch;
            col=col+1;
          }
          cout<<endl;
          row=row+1;
        }

         
         int n;
         cin>>n;
          int i=1;
          while(i<=n){
            int j=1;
            while(j<=n){
              char ch= 'A' + j -1;
              cout<<ch<<" ";
              j=j+1;
            }
            cout<<endl;
            i=i+1;
          }
 

         int n;
        cin>>n;
        int i=1;
        char ch='A';
        while (i<=n){
          int j=1;
          while(j<=n){
          
            cout<< ch << " ";
            ch=ch+1;
            j=j+1;
          }
          cout<<endl;
          i=i+1;
        }
        

       int n;
       cin>>n;
       int i=1;
       while(i<=n){
        int j=1;
        
        while (j<=n){
          char ch='A'+i+j-2;
          cout<<ch<<" ";
          j=j+1;
        }
        cout<<endl;
        i=i+1;
       }
       

      int n;
      cin>>n;
      int i=1;
      while(i<=n){
        int j=1;
        while(j<=i){
          char ch='A'+i-1;
          cout<<ch<<" ";
          j=j+1;
        }
        cout<<endl;
        i=i+1;
      }
      

      int n;
      cin>>n;
      int i=1;
      char ch='A';
      while(i<=n){
        int j=1;
        
        while(j<=i){
          cout<<ch<<" ";
          ch=ch+1;
          j=j+1;
        }
        cout<<endl;
        i=i+1;
      }
      

     int n;
     cin>>n;
     int i=1;
     while(i<=n){
      int j=1;
      while(j<=i){
        char ch='A'+i+j-2;
        cout << ch << " ";
        j=j+1;

      }
      cout<<endl;
      i=i+1;
     }
     
          
          int n;
          cin>>n;
          int i=1;
          
          while(i<=n){
            int j=1;
            char start='A'+ n -i;
            while(j<=i){
              cout<<start<<" ";
              start = start+1;
              j=j+1;
            }
            cout<<endl;
            i=i+1;
          }
          
       
       int n;
       cin>>n;
       int i=1;
       while(i<=n){
        int j=1;
        char start='A'+i-j;
        while(j<=n){
          cout<<start<<" ";
          start= start +1;
          j=j+1;

        }
        i=i+1;
        cout<<endl;
       }
        
        
       int n;
       cin>>n;
       int i=1;
       while(i<=n){
        int space=n-i;
        while(space){
          cout<<" ";
          space = space-1;

        }
        int j=1;
        while(j<=i){
          cout<<"*";
          j=j+1;
        }
        cout<<endl;
        i=i+1;
       }

       int n;
       cin>>n;
        int i=1;
        while(i<=n){
          int star= n-i+1;
          while(star){
            cout<<"*";
            star = star-1;
          }
          i=i+1;
          cout<<endl;
        }

         int n;
         cin>>n;
         int i=1;
         while(i<=n){
          int space=i-1;
          while(space){
            cout<<" ";
            space=space-1;
          }
          int star=n-i+1;
          while(star){
            cout<<"*";
            star=star-1;
          }
          i=i+1;
          cout<<endl;
         }
         
        
         int n;
         cin>>n;
         int i=1;
         while(i<=n){
          int space=i-1;
          while(space){
            cout<<" ";
            space = space-1;
          }
          int start=n-i+1;
          while(start){
            cout<<i;
          start=start-1;  
          }
          i=i+1;
          cout<<endl;
         }
        

       int n;
       cin>>n;
       int i=1;
       while(i<=n){
        int space=n-i;
        while(space){
          cout <<  " ";
          space=space-1;
        }
        
        int j=1;
        while(j<=i){
          cout<<i;
          j=j+1;
        }
        cout<<endl;
        i=i+1;

       }
       

      int n;
      cin>>n;
      int i=1;
      while(i<=n){
        int space=i-1;
        while(space){
          cout<< " ";
          space = space-1;
        
        }  
        int j=i;
        int start=n-i+1;
        while(start){
          cout<<j;
          start= start-1;
          j=j+1;
        }
        i=i+1;
        cout<<endl;
      }
 
         int n;
         cin>>n;
         int i=1;
         int value=1;
         while(i<=n){
          int space=n-i;
          while(space){
            cout<<" ";
            space= space-1;
          }
            int j=1;
            while(j<=i){
              cout<< value;
              value=value+1;
              j=j+1;
            }
            cout<<endl;
            i=i+1;
         }
*/
            
           int n;
           cin>>n;
           int i=1;
           int value=1;
           while(i<=n){
            int start=n-i+1;
            while(start){
             cout<<value<<" ";
             start=start-1;
             value=value+1;
            }
          
            i=i+1;
            cout<<endl;
           }
 }