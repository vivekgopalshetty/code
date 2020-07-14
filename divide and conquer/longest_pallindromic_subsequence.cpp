
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

int longest_common_pallindrome(string s1,int start,int last)
{
    if(start>=last || start<0 || last >= s1.length())
    {
        return 0;
    }
    if(start==last)
    {
        return 1;
    }

    int x3=0;
    if(s1[start]==s1[last])
    {
        x3=2+longest_common_pallindrome(s1,start+1,last-1);
    }

    int x1=longest_common_pallindrome(s1,start+1,last);
    int x2=longest_common_pallindrome(s1,start,last-1);

    return max(x3,max(x1,x2));
}


int main()
{
    string s1;
    cin >> s1;

    cout << longest_common_pallindrome(s1,0,s1.length()-1);
}


