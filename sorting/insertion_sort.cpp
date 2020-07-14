#include<iostream>
using namespace std;


int insertion_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int temp=arr[i];
        int j=i;
        while(j>0 && arr[j-1]>temp)
        {
            arr[j]=arr[j-1];
            j=j-1;
        }

        arr[j]=temp;
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

    insertion_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}

