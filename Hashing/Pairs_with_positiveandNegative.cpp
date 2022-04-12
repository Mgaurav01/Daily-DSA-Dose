#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
  public:
   vector<int> PosNegPair(int a[], int n) {
    vector<int>v,ans;//Create two vector one to store negative & the other one to return answer
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        if(a[i] < 0) //negative element
            v.push_back(a[i]);
    
        else
            mp[a[i]]++; //store +ve element
    }
    sort(v.begin(),v.end());
    for(int i=v.size()-1;i>=0;i--)
    {
        int data = abs(v[i]);
        if(mp[data] > 0)
        {
            ans.push_back(v[i]);
            ans.push_back(data);
            mp[data] -= 1;
        }
    }
    return ans;
    }

};

// { Driver Code Starts.
int main() {
  
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> v = obj.PosNegPair(a, n);

        if (v.size() == 0) cout << "0";

        for (auto it : v) cout << it << " ";
        cout << endl;
    
    return 0;
}  