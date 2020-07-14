#include<bits/stdc++.h>
using namespace std;

int mincost(vector<vector<int> > v,int row,int col)
{
    if(row==0 && col==0)
    {
        return v[0][0];
    }

    if(row==-1 || col==-1)
    {
        return 82131203812;
    }


    int x1=mincost(v,row-1,col);
    int x2=mincost(v,row,col-1);

    int k=min(x1,x2);

    return k+v[row][col];
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
    cout << mincost(v,row,col);
}
