//Brute Force 
//O(N2)
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int maxi = 0;
    for(int i=0 ; i<n ; i++)
    {
        for(int j = i+1 ; j<n ; j++)
        {
            if(prices[i] < prices[j])
            {
                int val = prices[j] - prices[i];
                maxi = max(val ,maxi); 
            }
        }
    }
    return maxi;    
    }
};
*/
#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX;
        int op = 0;
        int pist = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){
                lsf = prices[i];
            }
            pist = prices[i] - lsf;
            if(op < pist){
                op = pist;
            }
        }
        return op;
    }
int main()
{
    vector<int> prices = {7,1,5,3,6,4};
    cout<<maxProfit(prices);
    return 0;
}