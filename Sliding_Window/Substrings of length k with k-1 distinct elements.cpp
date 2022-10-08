
class Solution {
  public:
    int countOfSubstrings(string S, int K) {
        unordered_map<char,int> mp;

        int i = 0, j = 0, cnt = 0;
        int n = S.size();

        while(j < n){
            mp[S[j]]++;
            if((j-i+1) == K){
                if(mp.size() == K-1)
                cnt++;

                mp[S[i]]--;
                if(mp[S[i]] == 0)
                mp.erase(S[i]);
                i++;
            }

            j++;
        }

        return cnt;
    }
};
