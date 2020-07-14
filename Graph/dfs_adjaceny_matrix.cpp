
#include<bits/stdc++.h>
using namespace std;

void dfs(vector< vector<int> > mat,int n)
{
    stack<int> s;
    bool visited[n]={0};
    s.push(0);
    while(!s.empty())
    {
        int k=s.top();
        s.pop();
        visited[k]=1;
        cout << k;
        int j=0;
        while(j<n)
        {
            if(mat[k][j]==1 && visited[j]!=1)
            {
                s.push(j);
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
        cout<<"-------------------------------"<<endl;
    }

    dfs(mat,n);
}

