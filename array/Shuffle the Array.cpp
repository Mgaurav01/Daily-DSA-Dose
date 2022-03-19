#include<bits/stdc++.h>
using namespace std;

void shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[n+i]);
        }
        for(int i=0;i<nums.size();i++)
    {
      cout<<ans[i];
    }
    
    
    }
int main()
{
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;
    
    shuffle(nums , n);
    
    return 0;
}
