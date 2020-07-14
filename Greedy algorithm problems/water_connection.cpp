#include<bits/stdc++.h>
using namespace std;

waterconnection(map<int,int> m,int arr[],int n,int p)
{
    int slots[n];
    int min1;
    int k;
    vector<set<int>,int> v;
    for(int i=1;i<=n;i++)
    {
        if(m[i]!=0 && slots[i]!=0)
        {
            min1=arr[i];
            k=i;
            while(m[k]!=0)
            {
                k=m[k];
                min1=min(min1,arr[k]);
                slots[k]=1;
                cout << k << "->";
            }
        }

    }

}

int main()
{
    int n;
    int p;

    cin >> n >> p;

    int k1,k2,k3;
    map<int,int> m;
    int arr[p];

    for(int i=0;i<p;i++)
    {
        cin >> k1 >> k2 >> k3;
        m.insert({k1,k2});
        arr[i]=k3;
    }

    waterconnection(m,arr,n,p);

}
