#include <iostream>
#include <queue>
#include <map>
using namespace std;

/*
GFG QUESTION
eg->
Input: A = "aabc"
Output: "a#bb"
Explanation: For every character first non
repeating character is as follow-
"a" - first non-repeating character is 'a'
"aa" - no non-repeating character so '#'
"aab" - first non-repeating character is 'b'
"aabc" - first non-repeating character is 'b'
*/

string FirstNonRepeating(string A)
{
    // creating a map to store count of the character
    map<char, int> count;
    queue<int> q;
    string ans = ""; // creating a string to store ans;

    for (int i = 0; i < A.length(); i++)
    {
        char ch = A[i];

        // increasing count in order to keep track of the frequency of each character
        count[ch]++;

        // pushing into the queue
        q.push(ch);

        while (!q.empty())
        {
            if (count[q.front()] > 1)
            { // i.e repeating character found so pop it
                q.pop();
            }
            else
            {
                // non repeating character found => push in ans string
                ans.push_back(q.front());
                break;
            }
        }

        if (q.empty())
        {
            ans.push_back('#');
        }
    }
    return ans;
}
int main(){
    string str = "aabbcc";
    string ans =FirstNonRepeating(str);
    cout<<ans;

}
