// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         unordered_map<char , int>un;
//         int i=0,j=0,ans=0,maxi=0;
//         while(j<s.size())
//         {
//             un[s[j]]++;
//             maxi = max(maxi , un[s[j]]);
//             if((j-i+1)-maxi > k)
//             {
//                 un[s[i]]--;
//                 i++;
//             }
//             ans = max(ans , (j-i+1));
//             j++;
//         }
//         return ans;
//     }
// };