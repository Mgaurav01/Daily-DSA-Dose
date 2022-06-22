// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    public:
  void dfs(int node, vector<int> adj[], vector<int> &ans,vector<int> &vis ){
                   vis[node]=1;
                   ans.push_back(node);
                   
                   
                   for(auto child:adj[node]){
                       if(!vis[child]){
                           dfs(child,adj,ans,vis);
                       }
                   }
    }
    
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Dfs is one of the most important function of graph
        //It uses recursion, its time complexity is O(log(V+E))
        
        
        vector<int> ans;
        vector<int> vis(v,0);
        //since a connected graph is given, all nodes would get travrsed
        //in one go only, so no need to call dfsfunction on for loop
        //just pass the root-> 0 and that's it!
        
        dfs(0,adj,ans,vis);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends