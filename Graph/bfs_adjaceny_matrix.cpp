
#include<bits/stdc++.h>
using namespace std;

void bfs(vector< vector<int> > mat,int n)
{
    queue<int> q;
    bool visited[n]={0};
    q.push(0);
    while(!q.empty())
    {
        int k=q.front();
        q.pop();
        visited[k]=1;
        cout << k;
        int j=0;
        while(j<n)
        {
            if(mat[k][j]==1 && visited[j]!=1)
            {
                q.push(j);
                visited[j]=1;
            }
            j=j+1;
        }
    }
}

int main()
{

    int n;
    cin >> n;

    vector< vector<int> > mat;
    for(int i=0;i<n;i++)
    {
        vector<int> v;
        for(int j=0;j<n;j++)
        {
            int k;
            cin >> k;
            v.push_back(k);
        }

        mat.push_back(v);
    }

    bfs(mat,n);
}
