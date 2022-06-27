/*
    Problem Statement: Given a weighted, undirected, and connected graph of V vertices and E edges, Find the shortest distance of all the vertex’s from the source vertex S.

    Note: The Graph doesn’t contain any negative weight cycle
*/

/*
    Intuition: The above problem seems familiar to finding the shortest distance in the case of unit edge weights for undirected graphs. Hence, our first guess could be a BFS kind of approach. The only thing that we need to take care of is that of all the paths possible between a pair of nodes, we need to store the minimum distance between them. That is, say we have a node that has been reached by two paths, one with a cost of 5 and another with a cost of 10. It is obvious that the path with a cost of 5 would continue to give optimal distance for its adjacent node as opposed to the path with a cost of 10.

    Approach:

    We can implement the algorithm using the following steps:
    
    We would be using a min-heap and a distance array of size N initialized with infinity (indicating that at present none of the nodes are reachable from the source node) and initialize the distance to source node as 0.
    
    We push the source node to the queue.
    
    For every node at the top of the queue we pop that element out and look out for its adjacent nodes. If the current reachable distance is better than the previous distance indicated by the distance array, we update the distance and push it in the queue.
    
    A node with a lower distance would be at the top of the priority queue as opposed to a node with a higher distance. By following the steps 3, until our queue becomes empty, we would get the minimum distance from the source node to all other nodes. Here’s a quick demonstration of the same. 
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5 , m = 6 , source = 1;
    vector<pair<int,int>> g[n + 1];

    g[1].push_back({2 , 2}); // {Node , weight}
    g[1].push_back({4,1});
	g[2].push_back({1,2});
	g[2].push_back({5,5});
	g[2].push_back({3,4});
	g[3].push_back({2,4});
	g[3].push_back({4,3});
	g[3].push_back({5,1});
	g[4].push_back({1,1});
	g[4].push_back({3,3});
	g[5].push_back({2,5});
	g[5].push_back({3,1});
    
    priority_queue<pair<int, int>,vector<pair<int ,int>>,greater<pair<int,int>>>pq ;//minHeap
    vector<int>disTo(n+1 , INT_MAX);
    disTo[source] = 0;

    pq.push(make_pair(0 , source));
    while(!pq.empty())
    {
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();

        for(auto it : g[prev])
        {
            int next = it.first;
            int nextDist = it.second;

            if(disTo[next] > disTo[prev] + nextDist){
                disTo[next] =disTo[prev] + nextDist;

                pq.push(make_pair(disTo[next] , next));
            }
        }
    }
    cout << "The distances from source " << source << " are : \n";
	for(int i = 1 ; i<=n ; i++)	cout << disTo[i] << " ";
	cout << "\n";
	return 0;
}