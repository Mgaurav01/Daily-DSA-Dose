#include <bits/stdc++.h>
using namespace std;
/*
Input:
n = 5, m = 3
a[] = {89, 24, 75, 11, 23}
b[] = {89, 2, 4}

Output: 1

Explanation: 
89 is the only element 
in the intersection of two arrays.
*/
class Solution {
  public:
   
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
    unordered_set<int>s;
    int count = 0;
    for(int i=0;i<n;i++)
        s.insert(a[i]);
    for(int i=0;i<m;i++)
    {
        int key = b[i];
        if(s.find(key) != s.end())
        {
            count++;
            s.erase(key);
        }
    }
   
    return count;
    }
};
//we use erase to handle below example
/*
 A[] = {4,4} => unordered_Set = {4}
 B[] ={1,2,4,5,6,4}
 =>{4} will have to count only once
*/

// { Driver Code Starts.
int main() {
   
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
   
    return 0;
}  // } Driver Code Ends