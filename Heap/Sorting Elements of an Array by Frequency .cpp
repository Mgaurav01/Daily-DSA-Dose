#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n = 5;
    int arr[n] = {5,5,4,6,4};
    unordered_map<int, int>mp;
    priority_queue<pair<int,int>>maxhp;
    for(int i=0;i<n;i++)
         mp[arr[i]]++;
    for(auto i=mp.begin() ; i != mp.end() ; i++)
    {
        maxhp.push({i->second , i->first});
    }
    while(maxhp.size() > 0)
    {
        int freq = maxhp.top().second;
        int val = maxhp.top().first;
        for (int i = 0; i < freq; i++)
        {
            cout<<val;
           
        }
        maxhp.pop();
    }
    return 0;
}