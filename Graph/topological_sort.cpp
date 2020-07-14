

void topological_sort()
{
    int vis[n]={0};
    stack<int> s;
    for(int i=0;i<v.size();i++)
    {
        if(vis[v[i]]!=1)
        {
             topological_visit(v[i]);
        }
    }
}

void topological_visit(int node)
{
    for(int i=0;i<adj[node].size();i++)
    {
        if(vis[adj[node][i]]!=1)
        {
            topological_visit(adj[node][i]);
        }
    }

    visited[node]=1;
    s.push(node);
}
