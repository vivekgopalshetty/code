#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int killed[n]={0};
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='P' && killed[i]==0)
        {
            for(int j=0;j<k;j++)
            {
                if(arr[j]=='T' && killed[j]==0)
                {
                    killed[i]=1;
                    killed[j]=1;
                    cnt++;
                    break;
                }
            }

             for(int j=i-1;j>=i-k;j--)
            {
                if(arr[j]=='T' && killed[j]==0)
                {
                    killed[i]=1;
                    killed[j]=1;
                    cnt++;
                    break;
                }
            }
        }
        else if(arr[i]=='T' && killed[i]==0)
        {
            for(int j=0;j<k;j++)
            {
                if(arr[j]=='P' && killed[j]==0)
                {
                    killed[i]=1;
                    killed[j]=1;
                     cnt++;
                     break;
                }
            }

             for(int j=i-1;j>=i-k;j--)
            {
                if(arr[j]=='P' && killed[j]==0)
                {
                    killed[i]=1;
                    killed[j]=1;
                     cnt++;
                     break;
                }
            }
        }

    }

    cout << cnt;
}
