/*
Example 1:
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0;
    int result = INT_MIN;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] == 0)
        {
            result = max(result , count);
            count = 0;
        }
        else{
            count++;
        }
    }
    return max(result , count);    
    }
};  