#include<bits/stdc++.h>
using namespace std;

int s1_to_s2(string s1,string s2,int start1,int start2)
{
    if(start1>=s1.length())
    {
        return s2.length()-start2;
    }

    if(start2>=s2.length())
    {
        return s1.length()-start1;
    }
    if(s1[start1]==s2[start2])
    {
        return s1_to_s2(s1,s2,start1+1,start2+1);
    }

    int x1=1+s1_to_s2(s1,s2,start1,start2+1);
    int x2=1+s1_to_s2(s1,s2,start1+1,start2);
    int x3=1+s1_to_s2(s1,s2,start1+1,start2+1);

    return min(x1,min(x2,x3));
}

int main()
{
    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    cout << s1_to_s2(s1,s2,0,0);
}
