#include<bits/stdc++.h>
using namespace std;

int max_profit(int a[],int start,int n)
{
    if(start>=n)
    {
        return 0;
    }
    int x1=a[start]+max_profit(a,start+2,n);
    int x2=max_profit(a,start+1,n);

    return max(x1,x2);
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    cout << max_profit(a,0,n);
}
