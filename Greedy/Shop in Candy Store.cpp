/*
Input:
N = 4
K = 2
candies[] = {3 2 1 4}

Output:
3 7

*/
// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int arr[], int N, int k)
    {
        int min = 0 , max = 0 , i = 0 , j = N-1;
        sort(arr , arr + N);
        while(i <= j)
        {
            min += arr[i];
            i++;
            j = j - k;
        }
        reverse(arr , arr + N);
        i = 0 , j = N - 1;
        while(i <= j)
        {
            max += arr[i];
            i++;
            j = j - k;
        }
     return {min , max};    
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends