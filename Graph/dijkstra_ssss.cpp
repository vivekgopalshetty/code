#include<bits/stdc++.h>
using namespace std;

#define INT_MAX 8182892;


void dijkstra(vector< vector<int> > v,int n)
{
    int dist[n];
    int vis[n]={0};

    for(int i=1;i<n;i++)
        {
            dist[i]=INT_MAX;
        }
    dist[0]=0;

    multiset< pair<int,int> > s;
    s.insert({0,0});

    while(!s.empty())
    {
        pair<int,int> p=*s.begin();
        s.erase(s.begin());

        int x=p.first;
        int weight=p.second;
        if(vis[x]==1)
        {
            continue;
        }

        vis[x]=1;
        for(int i=0;i<v[x].size();i++)
        {
            int e=v[x][i].first;
            int w=v[x][i].second;

            if(dist[e]>dist[x]+w)
            {
                dist[e]=dist[x]+w;
                s.insert({dist[e],e});
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout << i +":" << dist[i];
    }

}


int main()
{
    int n;
    cin >> n;

    ajd = new list< pair<int, int> >[n];

    dijkstra(mat,n);
}
