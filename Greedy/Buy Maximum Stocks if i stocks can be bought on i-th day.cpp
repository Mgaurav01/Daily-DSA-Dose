/*

Input:
price[] = { 10, 7, 19 }
k = 45
Output: 4
Explanation: A customer purchases 1 stock on day 1, 
2 stocks on day 2 and 1 stock on day 3 for 
10, 7 * 2 = 14 and 19 respectively. Hence, 
total amount is 10 + 14 + 19 = 43 and number 
of stocks purchased is 4.

*/
// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int a[]){
        //Write your code here
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
        v.push_back({a[i] , (i + 1)});
    sort(v.begin() , v.end());
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        int price = v[i].first;
        int stock = v[i].second;
        if(price * stock <= k)
        {
            ans += stock;
            k -= (price * stock);
        }
        else
        {
            ans += (k / price);
            k   -= price * ( k / price);
        }
    }
    return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends