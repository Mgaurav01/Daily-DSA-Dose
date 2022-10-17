//Approch 1
class Solution {
public:
    bool checkIfPangram(string sentence) {
     unordered_map<char, int>mp;
     for(auto it : sentence)
         mp[it]++;
     for(char i = 'a' ; i <= 'z' ;i++)
     {
         if(mp.find(i) == mp.end()) return false;
         else{
             mp[i]--;
             if(mp[i] == 0) mp.erase(mp[i]);
         }
     }
        return true;
    }
};

//Approch 2
class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> v(26,0);
        for(auto x:sentence)
        {
            v[x-'a'] = 1;
        }
        return accumulate(begin(v),end(v),0) == 26;
    }
};
