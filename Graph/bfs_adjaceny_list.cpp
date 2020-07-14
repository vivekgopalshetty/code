
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
        vector<int> v=mat[k];
        int j=0;
        while(j<v.size())
        {
            if(visited[v[j]]!=1)
            {
                q.push(j);
                visited[v[j]]=1;
            }
            j=j+1;
        }

//        queue<int> k1=q;
//        while(k1.empty())
//        {
//            cout << k1.front()<<" ";
//            k1.pop();
//        }
//        cout << endl;
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
        int n1;
        cout << "enter no. of adjacent edges";
        cin >> n1;
        for(int j=0;j<n1;j++)
        {
            int k;
            cin >> k;
            v.push_back(k);
        }

        mat.push_back(v);
    }

    bfs(mat,n);
}
