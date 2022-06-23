#include <bits/stdc++.h>
using namespace std;

bool bipartiteBfs(int src, vector<int> adj[], int color[]) {
    queue<int>q;
    q.push(src); 
    color[src] = 1; 
    while(!q.empty()) {
        int node = q.front(); 
        q.pop();
        
        for(auto it : adj[node]) {
            if(color[it] == -1) {
                color[it] = 1 - color[node]; 
                q.push(it); 
            } else if(color[it] == color[node]) {
                return false; 
            }
        }
    }
    return true; 
}
bool checkBipartite(vector<int> adj[], int n) {
    int color[n];
    memset(color, -1, sizeof color); 
    for(int i = 0;i<n;i++) {
        if(color[i] == -1) {
            if(!bipartiteBfs(i, adj, color)) {
                return false;
            }
        }
    }
    return true; 
}
int main() {
	int n, m;
	cin >> n >> m;
	vector<int> adj[n];
	for(int i = 0;i<m;i++) {
	    int u, v;
	    cin >> u >> v;
	    adj[u].push_back(v); 
	    adj[v].push_back(u); 
	}
	
	if(checkBipartite(adj, n)) {
	    cout << "yes"; 
	} else {
	    cout << "No"; 
	}
	return 0;
}
///////////////////////////////////////////////LEETCODE///////////////////////////////////////////////////////
/*class Solution {
public:
    bool bipartiteBfs(int src , vector<vector<int>> &graph , vector<int> &color)
    {
        color[src] = 1;
        queue<int>q;
        q.push(src);
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            
            for(auto i : graph[u])
            {
                if(color[i] == -1)
                {
                    color[i] = 1 - color[u];
                    q.push(i);
                }
                else if(color[i] == color[u]) return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) { 
      int n = graph.size();
      vector<int> color(n,-1);
      for(int i=0;i<n;i++)
      {
          if(color[i] == -1)
          {
              if(!bipartiteBfs(i , graph , color)) 
              {
                  return false;
              }
          }
      }
        return true;
    }
};
*/