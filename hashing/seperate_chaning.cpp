
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > hashTable(10);

int hash_func(int n)
{
    int x=n%10;
    return x;

}
void insert_in(int n)
{
    int index=hash_func(n);
    hashTable[index].push_back(n);
}

int search_for(int n)
{
    int index=hash_func(n);
    cout << index <<" ";
    for(int i=0;i<hashTable[index].size();i++)
    {
        if(hashTable[index][i]==n)
        {
            return i;
        }
    }
}


void print()
{
    for(int i=0;i<hashTable.size();i++)
    {
        for(int j=0;j<hashTable[i].size();j++)
        {
            cout << hashTable[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    insert_in(10);
    insert_in(24);
    insert_in(38);
    insert_in(20);
    insert_in(23);
    insert_in(56);
    insert_in(99);
    insert_in(46);
    print();
    return 0;

}
