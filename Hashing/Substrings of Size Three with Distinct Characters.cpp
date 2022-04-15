#include <bits/stdc++.h>
using namespace std;
int countGoodSubstrings(string s) {
        int i=0,j=0,count=0;
        while(j<s.size()){
            if(j-i+1 < 3)
                j++;
            else if(j-i+1 == 3){
               if((s[i]!=s[i+1] && s[i]!=s[i+2]) && (s[i+1]!=s[i] && s[i+1]!=s[i+2]) && (s[i+2]!=s[i+1] && s[i+2]!=s[i])) 
                   count++;
                i++;j++;
            }
        }
        return count;
    }

int main(){
    string s = {"xyzzaz"};
    int ans = countGoodSubstrings(s);
    cout<<ans;
    return 0;
}