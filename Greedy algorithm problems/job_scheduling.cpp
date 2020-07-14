#include<bits/stdc++.h>
using namespace std;

bool deadsort(pair<char,pair<int,int> >  &m1,pair<char,pair<int,int> >  &m2)
{
    return m1.second.second > m2.second.second;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<char,pair<int,int> > > v;

    char k1;
    int k2,k3;
    for(int i=0;i<n;i++)
    {
        cin >> k1 ;
        cin >> k2 ;
        cin >> k3;
        cout << "-------------\n";
        v.push_back({k1,{k2,k3}});
    }

    sort(v.begin(),v.end(),deadsort);
     for(int i=0;i<n;i++)
    {
        cout << v[i].second.second <<" ";
    }
    cout << "\n";

    int slot[n]={0};
    char order[n];

    for(int i=0;i<n;i++)
    {
        for(int j=v[i].second.first-1;j>=0;j--)
        {
            if(slot[j]==0)
            {
                order[j]=v[i].first;
                slot[j]=1;
                break;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        if(slot[i]==1)
        {
            cout << order[i]<<" ";
        }
    }
}
