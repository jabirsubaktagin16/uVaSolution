#include<bits/stdc++.h>
using namespace std;

long long simpleAddition(long long n)
{
    if(n<=0)
        return 0;
    long long sum=0;
    while(n!=0)
    {
        sum+=45*(n/10);
        for(long long i=n/10*10+1;i<=n;i++)
            sum+=i%10;
        n/=10;
    }
    return sum;
}
int main()
{
    long long p,q;
    while(scanf("%lld %lld",&p,&q)!=EOF){
            if(p<0 && q<0)
                break;
            cout<<simpleAddition(q)-simpleAddition(p-1)<<endl;
    }
    return 0;
}
