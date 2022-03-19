#include<bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int n = accounts.size();
    int max_sum = 0, cur_sum = 0;
    for(int i = 0; i < n ;i++ )
    {    for(int j = 0;j < accounts[i].size(); j++ )
        {
            cur_sum += accounts[i][j];
            
        }
     max_sum = max(cur_sum , max_sum);
     cur_sum = 0;
    }
    return max_sum;
    }
int main()
{
    vector<vector<int>> acc = {{1,2,3},{3,2,1}};
    int ans = maximumWealth(acc);
    cout<<ans;

    return 0;
}    

