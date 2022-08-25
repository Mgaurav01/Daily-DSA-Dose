class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     unordered_map<char ,int>m;
     for(auto it : ransomNote) m[it]++;

     for(int i=0;i<magazine.size();i++)
     {
       int key = magazine[i];
       if(m.find(key) != m.end())
       {
         m[key]--;
         auto it = m.find(key);
         if(it->second == 0)
            m.erase(it);
       }
     }
     if(m.size() != 0) return false;

     return true;
    }
};
