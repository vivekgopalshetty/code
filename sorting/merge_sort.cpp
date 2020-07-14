
#include<iostream>
using namespace std;

void merger(int arr[],int start,int mid,int end1)
{
    int aux[end1-start+1];
    int p=start;
    int q=mid+1;
    int k=0;

    for(int i=start;i<=end1;i++)
    {
        if(p>mid)
        {
            aux[k++]=arr[q++];
        }
        else if(q>end1)
        {
            aux[k++]=arr[p++];
        }
        else if(arr[p]>arr[q])
        {
            aux[k++]=arr[q++];
        }
        else
        {
            aux[k++]=arr[p++];
        }

    }


    p=0;
    for(int i=start;i<=end1;i++)
    {
        arr[i]=aux[p++];

    }
}

void merge_sort(int arr[],int start,int end1)
{
   if(start<end1)
   {
      int mid=(start+end1)/2;
      merge_sort(arr,start,mid);
      merge_sort(arr,mid+1,end1);
      merger(arr,start,mid,end1);
   }
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

    merge_sort(arr,0,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}

