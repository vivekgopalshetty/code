#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> hashTable(10);
int sizeh=10;
int hashTablesize=0;

int hash_func(int n)
{
    int x=n%10;
    return x;

}
void insert_in(int n)
{
    if(hashTablesize>=sizeh)
    {
        cout <<"your table if full\n" ;
        return ;
    }

    int index=hash_func(n);
    cout << index << endl;
    if(hashTable[index]==0)
    {
         hashTable[index]=n;
         hashTablesize++;
    }
    else
    {
        int cnt=1;
        while(hashTable[index]!=0)
        {
            index=(index+cnt*cnt)%hashTablesize;
            cnt++;
        }
         hashTable[index]=n;
         hashTablesize++;
    }


}

int search_for(int n)
{
    int cnt=0;
    int index=hash_func(n);
    int j=index-1;
    while(hashTable[index]!=n)
    {
        if(index==j)
        {
            return -1;
        }

        index=(index+cnt*cnt)%hashTablesize;
        cnt++;
    }
    return index;
}


void print()
{
    for(int i=0;i<sizeh;i++)
    {
     cout << hashTable[i]<< " ";
    }
    cout<< endl;
}

int main()
{
    print();
    insert_in(11);
    insert_in(21);
    insert_in(31);
    insert_in(41);
//    insert_in(51);
//    insert_in(61);
    print();
    return 0;

}
