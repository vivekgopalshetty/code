#include<bits/stdc++.h>
using namespace std;


int min_prod(int arr[],int n)
{
    int min_pos=INT_MAX;
    int max_neg=INT_MIN;
    int cntzero=0;
    int cntneg=0;

    int prod_neg=1;
    int prod_pos=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            cntneg++;
            max_neg=max(max_neg,arr[i]);
            prod_neg=prod_neg*arr[i];
        }

        if(arr[i]==0)
        {
            cntzero++;
        }

        if(arr[i]>0)
        {
            min_pos=min(min_pos,arr[i]);
            prod_pos=prod_pos*arr[i];
        }
    }
    cout << prod_neg <<" "<<prod_pos<<endl;
    cout << max_neg <<" " << cntneg <<endl;
    if(cntneg>0)
    {
        if(cntneg%2==0)
        {
            cout << prod_neg%(max_neg*-1) <<endl;
            return -1*(prod_neg%abs(max_neg))*(prod_pos);
        }
        else
        {
            return (prod_neg)*(prod_pos);
        }
    }
    else if(cntneg==0)
    {
        if(cntzero>0)
        {
            return 0;
        }
        else
        {
            return min_pos;
        }
    }

    return 0;
}

int min_prod1(int arr[],int n)
{
    int min_pos=INT_MAX;
    int max_neg=INT_MIN;
    int cntzero=0;
    int cntneg=0;

    int prod_neg=1;
    int prod_pos=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            cntneg++;
            max_neg=max(max_neg,arr[i]);
            prod_neg=prod_neg*arr[i];
        }

        if(arr[i]==0)
        {
            cntzero++;
        }

        if(arr[i]>0)
        {
            min_pos=min(min_pos,arr[i]);
            prod_pos=prod_pos*arr[i];
        }
    }

    if(cntneg>0)
    {
        if(cntneg%2==0)
        {
            return (prod_neg%max_neg)*(prod_pos);
        }
        else
        {
            return (prod_neg)*(prod_pos);
        }
    }
    else if(cntneg==0)
    {
        if(cntzero>0)
        {
            return 0;
        }
        else
        {
            return min_pos;
        }
    }

    return 0;
}

int main()
{
    int n;
    cin >> n;

    int arr[]={-1, -1, 2, 4, 3};
    cout << min_prod(arr,n);
}
