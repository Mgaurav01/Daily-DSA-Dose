#include<bits/stdc++.h>
using namespace std;

void getConcatenation(vector<int>& nums) {
      vector<int>ans;
      int n = nums.size();
     
        for(int i=0;i<n;i++){
           nums.push_back(nums[i]);
            
        }
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i];
    }
    }
int main()
{
    vector<int> nums = {1,2,1};
    getConcatenation(nums);
    return 0;
}    