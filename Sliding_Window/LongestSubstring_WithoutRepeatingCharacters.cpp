// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
/*
                                                    I/P O/P
Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 
 
*/

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    unordered_map<char,int>mp;
     int i=0,j=0,maxi=-1;
     if(s.length()==0)
            return 0;
    while(j < s.size()){
        mp[s[j]]++;
       
        if(mp.size()==j-i+1)
        {
            maxi = max(maxi , j-i+1);
            j++;
        }
        else if(mp.size() <  j-i+1)
        {
            while(mp.size() < j-i+1)
            {
                mp[s[i]]--;
                if(mp[s[i]]==0)
                {
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    return maxi;
    }
};


// { Driver Code Starts.
int main() {
    
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    
}
  // } Driver Code Ends