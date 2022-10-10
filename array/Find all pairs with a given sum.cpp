vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        sort(A , A+N);
        unordered_map<int,int>mp;
        vector<pair<int,int>>ans;
        for(int i=0;i<M;i++)
        {
            mp[B[i]]++;
        }

        for(int i=0;i<N;i++)
        {
            int val = X - A[i];
            if(mp.find(val) != mp.end())
            {
                ans.push_back(make_pair(A[i],val));
            }
            else
              continue;
        }
        return ans;
    }
