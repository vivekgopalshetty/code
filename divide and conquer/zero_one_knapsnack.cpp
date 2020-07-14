#include<bits/stdc++.h>
using namespace std;

#define size1 4

int zero_one_knap(vector<pair<int,int> > a,int start,int x)
{
    if(start>=size1 || x<=0 || start<0)
    {
        return 0;
    }

    int x1=0;
    if(a[start].second<=x)
    {
        return a[start].first+zero_one_knap(a,start+1,x-a[start].second);
    }

    int x2=zero_one_knap(a,start+1,x);

    return max(x1,x2);
}

int main()
{
    int n;
    cin >> n;

    int k1,k2;
    vector<pair<int,int> > a;
    for(int i=0;i<n;i++)
    {
        cin >> k1;
        cin >> k2;
        a.push_back({k1,k2});
    }

    int x;
    cin >> x;

    cout << zero_one_knap(a,0,x);

}
