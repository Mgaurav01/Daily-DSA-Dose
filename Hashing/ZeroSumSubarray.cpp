#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*

Input:
n = 6
arr[] = {0,0,5,5,0,0}
Output: 6
Explanation: The 6 subarrays are 
[0], [0], [0], [0], [0,0], and [0,0].

*/
class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here
       unordered_map<int,int> u;
       u.insert({0,1});
       ll sum=0,c=0;
       for(int i=0;i<n;i++){
           sum=sum+arr[i];
           auto it= u.find(sum);
           if(it!=u.end()){
               c=c+it->second;
           }
           u[sum]++;
       }
       return c;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends