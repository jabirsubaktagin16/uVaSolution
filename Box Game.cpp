#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    while(scanf("%lld",&n) && n)
    {
        long long int num=1;
        while(num<n)
        {
            num*=2;
            num++;
        }
        if(num==n)
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;
    }
    return 0;
}
