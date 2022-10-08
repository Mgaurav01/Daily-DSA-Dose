// Given a binary array arr of size N and an integer M.
// Find the maximum number of consecutive 1's produced by flipping at most M 0's.

// Example 1:
//
// Input:
// N = 3
// arr[] = {1, 0, 1}
// M = 1
// Output:
// 3
// Explanation:
// Maximum subarray is of size 3
// which can be made subarray of all 1 after
// flipping two zeros to 1.

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
      int i=0,j=0,count=0;
      int maxi=0;
      while(j < n)
      {
          if(arr[j] == 0)
            count++;
          if(count == m)
          {
              maxi = max(maxi , (j-i+1));
          }
          if(count > m)
          {
              while(count>m)
              {
                  if(arr[i] == 0)
                    count--;
                 i++;
              }
          }
          j++;
      }
      if(maxi == 0) return n;
      return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
