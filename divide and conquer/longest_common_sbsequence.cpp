#include<bits/stdc++.h>
using namespace std;


int  maxi(int n1,int n2,int n3)
{

    if(n1 >= n2 && n1 >= n3)
    {
        return  n1;
    }
    if(n2 >= n1 && n2 >= n3)
    {
        return  n2;
    }
    if(n3 >= n1 && n3 >= n2) {

       return n3;
    }

}

int longest_common_subsequnce(string s1,string s2,int start1,int start2)
{
    if(start1>=s1.length() || start2>=s2.length())
    {
        return 0;
    }

    if(s1[start1]==s2[start2])
    {
        return 1+longest_common_subsequnce(s1,s2,start1+1,start2+1);
    }

    int x1=longest_common_subsequnce(s1,s2,start1+1,start2);
    int x2=longest_common_subsequnce(s1,s2,start1,start2+1);

    return max(x1,x2);
}


int main()
{
    string s1,s2;
    cin >> s1;
    cin >> s2;

    cout << longest_common_subsequnce(s1,s2,0,0);
}


