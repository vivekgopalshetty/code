#include<bits/stdc++.h>
#include<vector>
#include<set>
using namespace std;

set<int> unionset(set<int> a,set<int> b)
{
    if(a.size()>b.size())
    {
        for(itr b.begin();itr!=b.end();++itr)
        {
            a.insert(*itr);
        }

        return a;
    }
    else
    {
        for(itr a.begin();itr!=a.end();++itr)
        {
            b.insert(*itr);
        }
        return b;
    }
}

int findset(int a,vector< set<int> > v)
{
    for(int i=0;i<v.size();i++)
    {
        set<int> k=v[i];
        for(int j=0;j<k.size();j++)
        {
            if(a==s[j])
            {
                return k[0];
            }
        }
    }
}

set<int> findset_re(int a,vector< set<int> > v)
{
    for(int i=0;i<v.size();i++)
    {
        set<int> k=v[i];
        for(int j=0;j<k.size();j++)
        {
            if(a==s[j])
            {
                return k;
            }
        }
    }
}

void kruskal()
{
    vector< set<int> > v;
    int n=10;
    for(int i=0;i<n;i++)
    {
        set<int> s;
        s.insert(i);
        v.push_back(s);
    }

    for(int i=0;i<weights.size();i++)
    {
        if(findset(weights[i].first,v)!=findset(weights[i].second,v))
        {
            unionset(findset_re(weights[i].first,weights[i].second))
            v.erase(v.begin(),v.find(weights[i].second))
            cost=cost+weights[i][1];

        }
    }

}

int main()
{
    return 0;
}
