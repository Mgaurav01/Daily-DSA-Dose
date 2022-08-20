class Solution {
public:
    bool isPossible(vector<int>& nums) {
     unordered_map<int,int>m;
      
     for(auto it : nums) m[it]++;
     
     for(auto it : nums)
     {
       if(m[it] == 0) continue;
       int freq = m[it] , cur = it , count = 0;
       while(m.count(cur) && m[cur] >= freq)
       {
         freq = max(freq , m[cur]);
         m[cur]--;
         count++;
         cur++;
       }
       if(count < 3) return false;
     }
      return true;
    }
};