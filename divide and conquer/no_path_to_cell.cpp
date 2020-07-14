#include<bits/stdc++.h>
using namespace std;

int no_of_paths(vector<vector<int> > v,int row,int col,int cost)
{
    if(row==0 && col==0)
    {
        return v[0][0]-cost==0 ? 1:0;
    }

    if(cost<0)
    {
        return 0;
    }

    if(row==0)
    {
        return no_of_paths(v,0,col-1,cost-v[0][col]);
    }

    if(col==0)
    {
        return no_of_paths(v,row-1,col,cost-v[row][row-1]);
    }

    int x1=no_of_paths(v,row-1,col,cost-v[row][col]);
    int x2=no_of_paths(v,row,col-1,cost-v[row][col]);

    return x1+x2;
}

int main()
{
    int m,n;
    cin >> m >> n;

    vector<vector<int> > v;

    for(int i=0;i<n;i++)
    {
        vector<int> k;
        for(int j=0;j<m;j++)
        {
            int k1;
            cin >> k1;
            k.push_back(k1);
        }

        v.push_back(k);
    }

    int row,col;
    cin >> row;
    cin >> col;
    cout << no_of_paths(v,row,col,25);
}
