#include<bits/stdc++.h>
using namespace std;

long long int calculate(long long int n,long long int m)
{
    long long int sum=0;
    for(long long int i=n;;i++)
    {
        sum+=i;
        if(sum>=m)
            return i;
    }
}
int main()
{
    long long int n,m,sum;
    while(scanf("%lld %lld",&n ,&m)!=EOF)
    {
        sum=calculate(n,m);
        cout<<sum<<endl;
    }
    return 0;
}
