#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n<0)
    {
        cout <<"negative number not accepted";
        return 0;
    }

    if(n==0)
    {
       return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

int main()
{
    cout << fib(7);
}
