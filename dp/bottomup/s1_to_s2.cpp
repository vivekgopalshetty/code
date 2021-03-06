#include<bits/stdc++.h>
using namespace std;

int s1_to_s2(string s1,string s2)
{
    int dp[s1.length() + 1][s2.length() + 1]={};

    for(int i=0;i<=s1.length();i++)
    {
        dp[i][0]=i;
    }

    for(int i=0;i<=s2.length();i++)
    {
        dp[0][i]=i;
    }

    for(int i=1;i<=s1.length();i++)
    {
        for(int j=1;j<=s2.length();j++)
        {
            if(s1[i-1]==s1[j-1])
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
            }
        }
    }

    return dp[s1.length()][s2.length()];

}

int main()
{
    string s1,s2;
    cin >> s1;
    cin >> s2;

    cout << s1_to_s2(s1,s2);
}

