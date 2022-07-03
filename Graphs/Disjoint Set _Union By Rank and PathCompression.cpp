
/*
int parent[10000];
int rank[10000];

void makeSet(){
    for(int i=1 ; i <= n ;i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }
    }
int findPar(int node) // TC -> 0(4 * alpha)->0(4)//constanst
    {
        if(node == finPar)
            return node;
        return parent[node] = findPar(parent[node]);    
    }
void union(int u , int v)
{
    u = finPar(u);
    v = findPar(v);

    if(rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if(rank[v] < rank[u])
    {
        parent[v] = u;
    }
    else
    {
        parent[v] = u;
        rank[u]++;
    }
}
void main()
{
    makeSet();
    int m ;
    cin>>m;
    while(m--)
    {
        int u , v;
        union(u  ,v);
    }
    //If 2 & 3 belong to same component or Not
    if(finPar(2) != findPar(3))
        cout<<"Different";
    else
        cout<<"Same";

    return 0;        
}
