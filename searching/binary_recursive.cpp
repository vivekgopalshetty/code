
#include<iostream>
using namespace std;


int binary_search(int arr[],int low,int high,int x)
{
   int mid = (low + high) / 2;
   if (low > high) return -1;
   if (arr[mid] == x) return mid;

   if (arr[mid] < x)
     return binary_search(arr, mid + 1, high, x);
   else
     return binary_search(arr, low, mid-1, x);
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

    int res=binary_search(arr,0,n,x);
    cout << res;
}
