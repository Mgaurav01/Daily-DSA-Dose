// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    unordered_map<int,int>unmap;
	    for(int i=0;i<n;i++)
	    {
	        unmap[arr[i]]++;
	    }
	    for(auto itr = unmap.begin(); itr!=unmap.end();itr++){
	       int key = itr->first;
	       int val = itr->second;
	       int pair = x - key;
	       if(pair == key)
	       {
	           if(val > 1)
	           {
	               return true;
	           }
	           else
	           {
	               if(unmap.find(pair) != unmap.end())
	               {
	                   return true;
	               }
	           }
	       }
	       
	    }
	
	    return false;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}
  // } Driver Code Ends