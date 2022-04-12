#include <bits/stdc++.h> 
using namespace std;
/*
leetcodeLink:-https://leetcode.com/problems/relative-sort-array/
gfg:-https://practice.geeksforgeeks.org/problems/relative-sorting4323/1#
Input:
N = 11 
M = 4
A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
A2[] = {2, 1, 8, 3}
Output: 
2 2 1 1 8 8 3 5 6 7 9
Explanation: Array elements of A1[] are
sorted according to A2[]. So 2 comes first
then 1 comes, then comes 8, then finally 3
comes, now we append remaining elements in
sorted order.

*/
class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> arr1, int N, vector<int> arr2, int M) 
    {
        vector<int> ans;
        
        map<int, int>mp;
        for(auto x: arr1)
            mp[x]++;
        for(auto temp :  arr2){
            if(mp.find(temp)!=mp.end()){
                auto x  = mp.find(temp);
                int count = x->second;  // 5->2
                vector<int>v(count, temp); // v = 5 5 
                ans.insert(ans.end(), v.begin(), v.end());
                mp.erase(temp);
            }
        }
        
        for(auto x : mp){
            int ele = x.first;
            int count = x.second;
            vector<int>v(count, ele);
            ans.insert(ans.end(), v.begin(), v.end());
        }
        
        return ans; 
    } 
};

// { Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 
  // } Driver Code Ends