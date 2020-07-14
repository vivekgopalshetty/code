#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> hashTable(10);
int sizeh=10;
int hashTablesize=0;

int hash_func1(int n)
{
    int x=n%10;
    return x;

}

int hash_func2(int n)
{
    int x=n*5464;
    x=x%10;
    return x;

}

void insert_in(int n)
{
    int cnt=0;
    if(hashTablesize>=sizeh)
    {
        cout <<"your table if full\n" ;
        return ;
    }

    hashTablesize++;
    int index1=hash_func1(n);
    int index2=hash_func2(n);
    while(hashTable[index1]!=0)
    {
        index1=(index1+cnt*index2)%hashTablesize;
        cnt++;
    }
    hashTable[index1]=n;
}

int search_for(int n)
{
    int cnt=0;
    int index1=hash_func1(n);
    int index2=hash_func2(n);
    int j=index1-1;
    while(hashTable[index1]!=n)
    {
        if(index1==j)
        {
            return -1;
        }

        index1=(index1+cnt*index2)%hashTablesize;
        cnt++;
    }
    return index1;
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
//    insert_in(31);
//    insert_in(41);
//    insert_in(51);
//    insert_in(61);
//    insert_in(71);
//    insert_in(81);
//    insert_in(91);
//    insert_in(101);
//    insert_in(121);
    print();
//    cout << search_for(191);
    return 0;

}
