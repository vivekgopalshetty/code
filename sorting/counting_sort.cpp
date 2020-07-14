
#include<iostream>
using namespace std;


void counting_sort(int arr[],int n)
{
   int max1=0;

   for(int i=0;i<n;i++)
   {
       if(arr[i]>max1)
       {
           max1=arr[i];
       }
   }

   int aux[max1+1]={0};
   for(int i=0;i<n;i++)
   {
       aux[arr[i]]++;
   }

   int k=0;
   for(int i=0;i<=max1;i++)
   {
       int cnt=aux[i];
       while(cnt--)
       {
           arr[k++]=i;
       }
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

    counting_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}

