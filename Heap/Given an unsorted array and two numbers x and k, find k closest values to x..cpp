// Given an unsorted array and two numbers x and k, find k closest values to x.
// Input : arr[] = {10, 2, 14, 4, 7, 6}, x = 5, k = 
// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    vector<int> Kclosest(vector<int>arr, int n, int x, int k) 
    {   vector<int>v; 
        // Your code goes here
        priority_queue<pair<int,int>> maxhp;
        for(int i=0;i<n;i++)
        {
            maxhp.push({abs(arr[i]-x) , arr[i]});
            if(maxhp.size() > k)
            {
                maxhp.pop();
            }
            
        }
        while(maxhp.size() > 0)
        {
            v.push_back(maxhp.top().second);
            maxhp.pop();
        }
    sort(v.begin(),v.end());    
    return v;    
    }  
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,k;
		cin>>n>>x>>k; 
		vector <int> array(n);
		for (int i = 0; i < n; ++i)
			cin>>array[i];
        
        Solution obj;
		vector <int> result = obj.Kclosest(array, n, x, k); 
		for (int i = 0; i < result.size(); ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}

	return 0; 
} 



  // } Driver Code Ends