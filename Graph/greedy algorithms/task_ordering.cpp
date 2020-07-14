
#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

void task_selection(vector< pair<int,int> >v)
{
    sort(v.begin(),v.end(),sortbysec);
    for(int i=0;i<v.size();i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }

    cout << "------------------------------------------\n";
    pair<int,int> p=v[0];
    cout << p.first << " " <<p.second << endl;

    pair<int,int> performed=*v.begin();
    for(int i=1;i<v.size();i++)
    {
            if(v[i].first >= performed.second)
            {
                cout << v[i].first << " " << v[i].second << endl;
                performed=v[i];
            }
    }
}

int main()
{
    vector< pair<int,int> >v;

    int n;
    cout << "Enter no. of activities " ;
    cin >> n;

    int start;
    int finish;

    for(int i=0;i<n;i++)
    {
        cin >> start;
        cin >> finish;
        v.push_back(make_pair(start,finish));
    }

    task_selection(v);
}
