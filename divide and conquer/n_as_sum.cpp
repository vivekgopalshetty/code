#include<bits/stdc++.h>
using namespace std;

int denomination(int a[],int x)
{
    if(x==0 || x==1|| x==2)
    {
        return 1;
    }
    else if(x==3)
    {
        return 2;
    }

    return denomination(a,x-a[0])+denomination(a,x-a[1])+denomination(a,x-a[2]);
}

int main()
{
    int a[3]={1,3,4};
    int x;
    cin >> x;
    cout << denomination(a,x);
}
