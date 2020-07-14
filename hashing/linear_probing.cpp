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

    hashTablesize++;
    int index=hash_func(n);
    int j=index-1;
    while(hashTable[index]!=0)
    {
        index=(index+1)%hashTablesize;
    }
    hashTable[index]=n;
}

int search_for(int n)
{
    int index=hash_func(n);
    int j=index-1;
    while(hashTable[index]!=n)
    {
        if(index>sizeh)
        {
            index=-1;
        }

        index=(index+1)%hashTablesize;
    }
    return index;
}


void print()
{
    for(int i=0;i<hashTable.size();i++)
    {
     cout << hashTable[i]<< " ";
    }
    cout<< endl;
}

int main()
{
    insert_in(11);
    insert_in(21);
    insert_in(31);
    insert_in(41);
    insert_in(51);
    insert_in(61);
    insert_in(71);
    insert_in(81);
    insert_in(91);
    insert_in(101);
    insert_in(121);
    print();
    cout << search_for(91);
    return 0;

}
