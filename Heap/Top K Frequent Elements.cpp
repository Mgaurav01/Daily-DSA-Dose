#include<bits/stdc++.h>
using namespace std;

void topKFrequent(vector<int>& nums, int k)
 {
    unordered_map<int,int>mp;
    priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> >minhp;
    vector<int>v;
    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        mp[nums[i]]++;
    }
    for(auto i = mp.begin() ; i != mp.end() ; i++)
    {
       minhp.push({i->second,i->first});
       if(minhp.size() > k)
       {
           minhp.pop();
       }
    }   cout<<"TOP K FREQUENT ELEMENT ARE :-";
        while(minhp.size() > 0)
        {
           cout<<minhp.top().second;
            minhp.pop();
        }
   
}

int main()
{
    vector<int>nums = {1,1,1,2,2,3};
    int k = 2;
    topKFrequent(nums , k);
    return 0;
}