#include<bits/stdc++.h>
using namespace std;

bool second1(pair<pair<int,int>,double>  &m1,pair<pair<int,int>,double>  &m2)
{
    return m2.second < m1.second;
}
int main()
{
    int n;
    cin >> n;

    vector<pair<pair<int,int>,double> > m;
    int k1,k2;
    for(int i=0;i<n;i++)
    {
        cin >> k1;
        cin >> k2;
        m.push_back({{k1,k2},k1/k2});
    }

    sort(m.begin(),m.end(),second1);

    for(int i=0;i<n;i++)
    {
        cout << m[i].first.first <<" ";
    }


}

