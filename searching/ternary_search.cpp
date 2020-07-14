
#include<iostream>
using namespace std;

int arr[1000];

int ternary_search(int l,int r, int x)
{
    if(r>=l)
    {
        int mid1 = l + (r-l)/3;
        int mid2 = r -  (r-l)/3;
        if(arr[mid1] == x)
            return mid1;
        if(arr[mid2] == x)
            return mid2;
        if(x<arr[mid1])
            return ternary_search(l,mid1-1,x);
        else if(x>arr[mid2])
            return ternary_search(mid2+1,r,x);
        else
            return ternary_search(mid1+1,mid2-1,x);

    }
    return -1;
}


int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int res=ternary_search(0,n,x);
    cout << res;
}

