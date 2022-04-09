#include<bits/stdc++.h> 
using namespace std; 

/*
link:https://www.youtube.com/watch?v=rYkfBRtMJr8
EXPLAIN 
Input:
N = 2
arr[] = {2, 3}
Output:
0 2 3 5
Explanation:
When no elements is taken then Sum = 0.
When only 2 is taken then Sum = 2.
When only 3 is taken then Sum = 3.
When element 2 and 3 are taken then 
Sum = 2+3 = 5.

*/
class Solution
{
public:
    void solve(int id,vector<int> &arr,int sum,int n,vector<int> &ds){

    if(id==n){

        ds.push_back(sum);

        return;

    }

    sum+=arr[id];

    solve(id+1,arr,sum,n,ds);

    sum-=arr[id];

    solve(id+1,arr,sum,n,ds);

}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
         vector<int> ds;

         int sum=0;

    //sort(ds.begin(),ds.end());

        solve(0,arr,sum,N,ds);

        return ds;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
