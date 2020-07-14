#include<iostream>
using namespace std;


int linear_search(int arr[],int x,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }

    return -1;

}


int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int res=linear_search(arr,x,n);
    cout << res;
}
