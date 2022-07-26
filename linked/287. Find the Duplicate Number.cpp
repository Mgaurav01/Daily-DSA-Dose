// Brute Force Approach
// Using simple sorting algorithm
// Time Complexity:O(Nlogn + N)
class Solution
{
public:
    int findDuplicate(vector &nums)
    {
        sort(nums.begin(), nums.end());
        int i;
        for (i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
                break;
        }
        return nums[i];
    }
};

// Better Approach
// Using hashing unordered map

class Solution
{
public:
    int findDuplicate(vector &nums)
    {
        unordered_map<int, int> mpp;
        int i;
        for (i = 0; i < nums.size(); i++)
        {
            mpp[nums[i]]++;
            if (mpp[nums[i]] > 1)
            {
                break;
            }
        }
        return nums[i];
    }

    // Best Approach
    // Using linked list cycle
    class Solution
    {
    public:
        int findDuplicate(vector &nums)
        {
            int slow, fast;
            slow = nums[0];
            fast = nums[0];
            do
            {
                slow = nums[slow];
                fast = nums[nums[fast]];
            } while (slow != fast);
            fast = nums[0];
            while (slow != fast)
            {
                slow = nums[slow];
                fast = nums[fast];
            }
            return slow;
        }
    };