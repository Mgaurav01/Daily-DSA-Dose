#include<bits/stdc++.h>
using namespace std;
int main(){
/* Can be use for small no
    Time Complexity : O(n^2)    
//n=>no. of nodes , m=>no. of edges    
    int n , m;
    cin>>n>>m;
//declare the adjancent matrix
    int adj[n+1][n+1];
//take edges as input 
    for(int i=0;i<m;i++){
        int u , v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
*/
 //Time Complexity : O(N + 2E)
 int n , m;
 cin>>n>>m;
 vector<int> adj[n + 1];
 for(int i=0;i<m;i++){
    int u , v;
    cin>>u>>v;

    adj[u].push_back(v);
    adj[v].push_back(u);
 } 
    return 0;
}