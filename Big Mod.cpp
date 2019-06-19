#include<bits/stdc++.h>
using namespace std;

long long int BigMod(long long int B,long long int P,long long int M)
{
    if(P==0)
        return 1;
    if(P%2==0)
    {
        long long int res=BigMod(B,P/2,M);
        return res*res%M;
    }
    else
    {
        return (B * BigMod(B,P-1,M))%M;
    }
}
int main()
{
    long long int B,P,M,reminder;
    while(scanf("%lld %lld %lld",&B,&P,&M)!=EOF)
    {
        reminder=0;
        reminder=BigMod(B,P,M);
        cout<<reminder%M<<endl;
    }
    return 0;
}
