#include<bits/stdc++.h>
using namespace std;

struct node
{
    char a;
    int b;
    struct node* left;
    struct node* right;
};

bool second1(pair<char,int> &m1,pair<char,int> &m2)
{
    return m2.second > m1.second;
}

int creation(vector<char,int> v)
{
    priority_queue<int,char> p;

    for(int i=0;i<n;i++)
    {
        p.insert({v[i].second,v[i].first});
    }

    pair<int,char> p1;
    pair<int,char> p2;
    while(!p.empty())
    {
        p1=p.top();
        p.pop();

        p2=p.top();
        p.pop();

        if(p1.second!="-" && p2.second!="-")
        {
            struct node* n1;
            n1.a=p1.first;
            n1.b=p1.second;
            n1.left=NULL;
            n1.right=NULL;

            struct node* n2;
            n2.a=p2.first;
            n2.b=p2.second;
            n2.left=NULL;
            n2.right=NULL;

            struct node* n3;
            n3.left=n1;
            n3.right=n2;
            n3.b=p1.second+p2.second;
            n3.a="-";
            p.insert({n3.b,"-"});

        }
        else if(p1.second!="-" && p2.second=="-")
        {
            struct node* n3;
            n3.left=;
            n3.right=n2;
            n3.b=p1.second+p2.second;
            n3.a="-";
            p.insert({n3.b,"-"});
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector< pair<char,int> > v;
    char k1;
    int k2;
    for(int i=0;i<n;i++)
    {
        cin >> k1;
        cin >> k2;
        v.push_back({k1,k2});
    }

    sort(v.begin(),v.end(),second1);

}

