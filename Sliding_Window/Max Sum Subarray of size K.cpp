// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &Arr , int N){
        // code here 
        int i = 0 , j = 0;
        long maxSum = INT_MIN;
        long cur =0 ;
        while(j < Arr.size())
        {
             cur = cur + Arr[j];
            if((j-i+1) < k) j++;
            else if((j-i+1) == k)
            {
                maxSum = max(maxSum , cur);
                cur = cur - Arr[i];
                i++;
                j++;
            }
            else
            {
                cur = cur - Arr[i];
                i++;
            }
            
        }
        return maxSum;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends