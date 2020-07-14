#include<bits/stdc++.h>
using namespace std;

bool sortbydesc(int &a,int &b)
{
    return(a>b);
}

void coin_denomination(vector<int> v,int x)
{
    sort(v.begin(),v.end(),sortbydesc);
    vector<pair <int,int> > coins;
    for(int i=0;i<v.size();i++)
       {
            cout << v[i] <<" ";
       }
       cout << endl;

       for(int i=0;i<v.size();i++)
       {
           if(v[i]<=x)
           {
               int cnt=0;
               while(x>=v[i])
               {
                    cnt=cnt+1;
                    x=x-v[i];
               }

               coins.push_back(make_pair(v[i],cnt));

           }
       }

    cout << "result\n" ;
    for(int i=0;i<coins.size();i++)
    {
        cout << coins[i].first << " " << coins[i].second << endl;
    }
}

int main()
{
    vector<int> v;

    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    int x;
    cin >> x;

    coin_denomination(v,x);
}
