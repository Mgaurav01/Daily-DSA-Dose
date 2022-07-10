//Two pointer Approch
// ANALYSIS :-

// Time Complexity :- BigO(N)

// Space COmplexity :- BigO(1)

class Solution {
public:
    int maxArea(vector<int>& height) {
    int left = 0 , right = height.size() - 1;
    int maxi = 0;
    while(left < right)
    {
        int w = right - left;
        int h = min(height[left] , height[right]);
        int area = w * h;
        maxi = max(area , maxi);
        if(height[left] < height[right]) left++;
        else if(height[left] > height[right]) right--;
        else
        {
            left++;
            right--;
        }
    }
        return maxi;
    }
};
