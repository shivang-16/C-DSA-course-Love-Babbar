#include<iostream>
#include<string>
using namespace std;
int main(){
    //declaring a string
    string str = "Shivang Yadav";
    cout<<str<<endl;

    //Length of a string
    cout<<str.length()<<endl;
    
    //clear function
    str.clear();
    cout<< str <<endl;

 /*   
   // FIRST PROGRAM
     string str1;
    cout<<"Enter the word"<<endl;
    cin>>str1;
    cout<<str1;
    cout<<endl;
    /*In above code if we give input 2 words with space btw them than output will be only word before 
    space because cin cant execute after space for this we have to use "getline function" 
*/

/*
    //SECOND PROGRAM
    string str2;
    cout<<"Enter the word 2"<<endl;
    getline(cin, str2);
    cout<<str2<<endl;
*/

/*
   //THIRD PROGRAM
    //If we want to add two string
      
       string s1 ="Happy";
        string s2= "FamILY";
      // s1.append(s2);
       // cout<<s1<<endl;
        
        cout<< s1+s2<<endl;

        //Accessing a element in string
        cout<< s1[2]<<endl;
        cout<< s2[0]<<endl;

        //Comparing two string
        if(s1.compare(s2)==0)
        cout<<"Strings are equal "<<endl;
        else
        cout<<"Strings are not equal "<<endl;

        cout<<s2.compare(s1)<<endl;

        //Empty function
          //s1.clear();
        if(s1.empty())
        cout<<"String is empty "<<endl;
        else
        cout<<"String is not empty "<<endl;
        
        
       // Erase function

       s1.erase(2,2);//2 index se 2 elment hta do
       cout<<s1<<endl;

       //find function
      cout<< s2.find("ILY")<<endl;
 */

  /*
  //4th PROGRAM
        //Insert function
        string s3="nincompoop";
         s3.insert(3, "lol");//3 index pr lol insert kr do
         cout<<s3<<endl;

        //substring 
        string s= s3.substr(6, 4);// 6th index se aage ke 4 element
        cout<< s<<endl;
 */   
    
    //5TH PROGRAM
        // numeric string to integer
        string s4= "786";
        int x = stoi(s4);
        cout<<x<<endl;
        cout<<x+2<<endl;

        
        //integer to string
        int y = 786;
        cout<< to_string(y) + "2"<<endl;


    return 0;

}