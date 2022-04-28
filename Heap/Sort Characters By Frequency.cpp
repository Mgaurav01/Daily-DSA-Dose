/*
Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
*/
class Solution {
public:
    string frequencySort(string s) {
      string ans = "";
      unordered_map<char,int>mp;
      priority_queue<pair<int,char>>maxhp;
      for(int i=0;i<s.size();i++)
      {
          mp[s[i]]++;
      }
      for(auto i=mp.begin() ; i!=mp.end() ; i++)
      {
          maxhp.push({i->second , i->first});
      }
      while(maxhp.size() > 0)
      {
         int freq = maxhp.top().first;
         char val = maxhp.top().second;
         while(freq--)
         {
             ans.push_back(val);
         }
          
          maxhp.pop();
      }
   return ans;
    }
};