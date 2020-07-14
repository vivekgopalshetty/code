#include<bits/stdc++.h>
using namespace std;


int max_sum(int arr[],int n,int k)
{
    int prod=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(k>0 && arr[i]!=0)
        {
            k--;
            if(arr[i]<0)
            {
                prod=prod+(arr[i]*-1);
            }
            else if(arr[i]>0)
            {
                prod=prod+(arr[i]);
            }

        }
        else
        {
            prod=prod+arr[i];
        }

        if(arr[i]==0)
        {
            k=0;
        }

    }

    return prod;
}



int main()
{
    int n;
    cin >> n;

    int k;
    cin >> k;

    int arr[]={9, 8, 8, 5};
    cout << max_sum(arr,n,k);
}

