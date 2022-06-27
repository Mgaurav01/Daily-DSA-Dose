/*
Input: n = 3, edges = [[0,1],[1,2],[2,0]], source = 0, destination = 2
Output: true
Explanation: There are two paths from vertex 0 to vertex 2:
- 0 → 1 → 2
- 0 → 2
*/
/*
Code:
//BSF
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        unordered_map<int , vector<int>>graph;
        for(auto it : edges) 
         {
              graph[it[0]].push_back(it[1]);
              graph[it[1]].push_back(it[0]);
         }
        vector<int>vis(n ,0);
        queue<int>q;
        q.push(start);
        
        vis[start] = 1;
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            if(curr == end)
                return true;
            for(auto it : graph[curr])
            {
                if(!vis[it])
                {
                    q.push(it);
                    vis[it] = 1;
                }
            }
        }
        return false;
    }
    };
    */    
 /*
 CODE:
   //DFS
   class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        unordered_map<int,vector<int>> graph; 
        for(auto e : edges) {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
        stack<int> s;
        vector<int>vis(n , 0);
        s.push(start);
        vis[start] = 1;
        
        while(!s.empty())
        {
            auto top = s.top();
            if(top == end)
                return 1;
            s.pop();
            
            for(auto node : graph[top])
            {
                if(!vis[node])
                {
                    vis[node] = 1;
                    s.push(node);
                }
            }
        }
        return false;
    }
};
*/ 
