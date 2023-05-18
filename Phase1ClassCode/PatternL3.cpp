#include <iostream>
using namespace std;
int main()
{
  int n;
  int number = 1;
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    int start = n - i + 1;
    while (start)
    {
      cout << j;
      start = start - 1;
      j=j+1;
    }
    int space = i - 1;
    while (space)
    {
      cout << "*";
      space = space - 1;
    }
    // int gap = i - 1;
    // while (gap)
    // {
    //   cout << "*";
    //   gap = gap - 1;
    // }
    
   // int j=n;
  
    int end = n - i + 1;
    int temp=end;
    while (end)
    {
      cout << temp;
      temp=temp-1;
      end = end - 1;
      
    }
    cout << endl;
    i = i + 1;
    }
}
