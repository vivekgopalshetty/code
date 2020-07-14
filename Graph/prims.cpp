#include<bits/stdc++.h>
using namespace std;

void showpq(priority_queue < pair<int,int> > gq)
{
    priority_queue < pair<int,int> > g = gq;
    while (!g.empty())
    {
        pair<int,int> k=g.top();
        cout << '\t' << k.second;
        g.pop();
    }
    cout << '\n';
}

void prims()
{
    priority_queue< pair<int,int> > q;
    int visited[n];

    q.push({0,1});
    for(int i=1;i<10;i++)
    {
        q.push({i,8489273902});
    }

    showpq(q);
    while(!q.empty())
    {
        pair<int,int> k=q.top();
        q.pop();

        for(int i=0;i<adj[k.first].size();i++)
        {
            if(k.second>weights[adj[i]])
            {
                visited[adj[i]]=1;
            }
        }
    }
}



int main()
{
    prims();
}
