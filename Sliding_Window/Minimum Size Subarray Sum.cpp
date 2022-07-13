class Solution {
public:
    int minSubArrayLen(int k, vector<int>& arr) {
     int i=0,j=0,res=INT_MAX,sum=0;
     int n = arr.size();
     while(j < n)
     {
         sum += arr[j];
         
         while(sum >= k)
         {
            res = min(res , (j-i+1));
             sum -= arr[i];
             i++;
         }
         
         j++;
     }
        if(res > n+1) return 0;
        return res;
    }
};