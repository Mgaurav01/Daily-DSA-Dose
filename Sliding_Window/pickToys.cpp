#include <bits/stdc++.h>
using namespace std;
/*
I/P : {a,b,a,c,c,a,b}
O/P : 4
*/
int solve(vector<int> s ){
     // unordered_map stores no. of types of fruits in the current window
        // here key is the type of the fruit 
        // and value is the number of fruits of 'key' type in the current window
        unordered_map<int,int>mp;
        
        // 'i' is the left and 'j' is the right pointer of thw window
        // 'ans' will be the answer
        int i=0,j=0,maxi=0;
        while(j<s.size())
        {
            mp[s[j]]++;
            // as long as there are more than 2 types of fruit, shrink the window
            while(mp.size()>2)
            {
                if(mp[s[i]]==1)
                {
                    mp.erase(s[i]);
                }
                else
                {
                    mp[s[i]]--;
                }
                i++;
            }
            
            // take the max of already encountered window and current window
            maxi=max(maxi,j-i+1);
            
            // move the right pointer
            j++;
        }
        
        // finally return the answer
        return maxi;
    }
int main()
{
    vector<int>s={1,2,1};
    //int k = 2;
    int ans = solve(s);
    cout<<ans;
    return 0;
}