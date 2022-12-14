// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
/*

Example 1:

Input:
S = "aabacbebebe", K = 3
Output: 7
Explanation: "cbebebe" is the longest 
substring with K distinct characters.
Example 2:

Input: 
S = "aaaa", K = 2
Output: -1
Explanation: There's no substring with K
distinct characters.

*/
class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    unordered_map<char,int>mp;
    int i=0,j=0,maxi=-1;
   
    while(j < s.size()){
        mp[s[j]]++;
        if(mp.size() < k)
            j++;
        else if(mp.size()==k)
        {
            maxi = max(maxi , j-i+1);
            j++;
        }
        else if(mp.size() > k)
        {
            while(mp.size() > k)
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