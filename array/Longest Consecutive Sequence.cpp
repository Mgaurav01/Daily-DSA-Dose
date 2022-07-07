#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int n = nums.size();

    if (n == 0)
        return 0;

    int max_len = 1, cnt = 1;

    sort(nums.begin(), nums.end());

    for (int i = 1; i < n; i++)
    {
        if (nums[i] - nums[i - 1] == 1)
        {
            cnt++;
            max_len = max(max_len, cnt);
        }
        else if (nums[i] == nums[i - 1])
            continue;

        else
            cnt = 1;
    }
    cout<<max_len<<endl;
    return 0;
}  
/*
class Solution {
public:
     int longestConsecutive(vector<int>& nums) {
       unordered_set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
	   int longest = 0;
	   for(int num : s) {
        if(s.count(num - 1)) continue;
		int j = 1;
		while(s.count(num + j)) j++; 
		longest = max(longest, j);
	}
	return longest;
    
    }   
    
};
*/  