//Sliding Window 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
         int i=0,j=0;
        vector<int>v;
        priority_queue<pair<int,int>>pq;
        while(j<n){
            pq.push({arr[j],j});
            if(j-i+1<k)
             j++;
            else{
                while(!pq.empty()&&pq.top().second<i)
                  pq.pop();
                v.push_back(pq.top().first);  
                i++;
                j++;
            } 
        }
        return v;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends