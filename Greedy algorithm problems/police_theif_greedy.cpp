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

    int cnt=0;

    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='T')
        {
            v2.push_back(i);
        }
        else
        {
            v1.push_back(i);
        }
    }
    int n1=v1.size();
    int n2=v2.size();

    for(int i=0;i<n1;i++)
    {
        cout << v1[i]<<" ";
    }
    cout << endl;
    for(int i=0;i<n2;i++)
    {
        cout << v2[i] << " ";
    }

    cout << endl;

    int start1=0;
    int start2=0;
    while(start1<n1 && start2<n2)
    {
        if(abs(v1[start1]-v2[start2])<=k)
        {
            cout << v1[start1]<< " " <<v2[start2] << endl;
            start1++;
            start2++;
            cnt++;
        }
        else
        {
            if(start1<start2)
            {
                start1++;
            }
            else
            {
                start2++;
            }
        }

    }
    cout << cnt;
}

