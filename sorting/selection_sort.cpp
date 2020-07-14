

#include<iostream>
using namespace std;


int selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min1=arr[i];
        int minind=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min1)
            {
                min1=arr[j];
                minind=j;
            }
        }

        int temp=arr[i];
        arr[i]=arr[minind];
        arr[minind]=temp;
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

    selection_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}

