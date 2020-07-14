#include<bits/stdc++.h>
using namespace std;

bool second1(pair<int,int> &m1,pair<int,int> &m2)
{
    return m2.second > m1.second;
}
int main()
{
    int n;
    cin >> n;

    vector< pair<int,int> > m;
    int k1,k2;
    for(int i=0;i<n;i++)
    {
        cin >> k1;
        cin >> k2;
        m.push_back({k1,k2});
    }

    sort(m.begin(),m.end(),second1);

    vector<pair<int,int> >::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        cout << itr->second <<" ";
    }

    int fin=m.begin()->first;
    int cnt=0;
    for(itr=m.begin()+1;itr!=m.end();itr++)
    {
        if(itr->first>fin)
        {
            cnt++;
            fin=itr->second;
        }
    }

    cout << cnt+1;

}
