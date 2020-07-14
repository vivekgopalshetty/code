
#include<iostream>
using namespace std;


int binary_search(int arr[],int x,int n)
{
   int start=0;
   int end1=n;
   while(start<=end1)
   {
       int mid=(start+end1)/2;
       if(arr[mid]==x)
       {
           return mid;
       }
       else if(arr[mid]>x)
       {
           end1=mid-1;
       }
       else if(arr[mid]<x)
       {
           start=mid+1;
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

    int res=binary_search(arr,x,n);
    cout << res;
}
