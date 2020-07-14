#include<bits/stdc++.h>
using namespace std;

//mapping
// first value = weight,second=value ,third is density
bool sortbysec(const pair<pair<int,int>,float> &a,
              const pair<pair<int,int>,float> &b)
{
    return (a.second > b.second);
}

void knapsnack(vector< pair<pair<int,int>,float> > v,int x)
{
    sort(v.begin(),v.end(),sortbysec);
    int tt=x;
    for(int i=0;i<v.size();i++)
    {
        cout << v[i].first.first <<" " << v[i].first.second << " " << v[i].second << endl;
    }

    cout << "------------sorted----------";
    int total=0;
    int worth=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i].first.first <= x)
        {
            total=total+v[i].first.first;
            x=x-v[i].first.first;
            worth+=v[i].first.second;
        }
        else
        {
            worth+=v[i].second*(tt-total);
            break;
        }
    }

    cout << worth << endl;

}

int main()
{
    vector< pair<pair<int,int>,float> > v;

    int n;
    cin >> n;

    int l1;
    int l2;
    for(int i=0;i<n;i++)
    {
        cin >> l1;
        cin >> l2;
        float k=l2/(float)l1;
        v.push_back({{l1,l2},k});
    }

    int x;
    cin >> x;

    knapsnack(v,x);

}
