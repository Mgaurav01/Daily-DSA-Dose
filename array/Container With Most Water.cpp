//Brute Force
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//     int n = height.size();
//     //int left = 0 , right = height.size() - 1;
//     int maxi = 0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             int w = j - i;
//             int h = min(height[i] , height[j]);
//             int area = w * h;
//             maxi = max(area , maxi);
            
//         }
//     }
//         return maxi;
//     }
    
//};

//Two pointer Approch
// ANALYSIS :-

// Time Complexity :- BigO(N)

// Space COmplexity :- BigO(1)

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//     int left = 0 , right = height.size() - 1;
//     int maxi = 0;
//     while(left < right)
//     {
//         int w = right - left;
//         int h = min(height[left] , height[right]);
//         int area = w * h;
//         maxi = max(area , maxi);
//         if(height[left] < height[right]) left++;
//         else if(height[left] > height[right]) right--;
//         else
//         {
//             left++;
//             right--;
//         }
//     }
//         return maxi;
//     }
// };
