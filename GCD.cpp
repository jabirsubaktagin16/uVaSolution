#include<bits/stdc++.h>
using namespace std;

long long int GCD(long long int m,long long int n)
{
    if (m == 0)
        return n;
    if (n == 0)
        return m;
    if (m == n)
        return m;
    if (m > n)
        return GCD(m-n, n);
    return GCD(m, n-m);
}
int main()
{
    long long int N;
    while(scanf("%lld",&N)!=EOF)
    {
        long long int G=0;
        if(N==0)
            break;
        for(long long int i=1;i<N;i++)
        {
            for(long long int j=i+1;j<=N;j++)
            {
                G+=GCD(i,j);
            }
        }
        cout<<G<<endl;
    }
    return 0;
}
