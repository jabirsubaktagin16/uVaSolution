#include<bits/stdc++.h>
using namespace std;

int IsPrime(long long int n)
{
    long long int l,flag,i,j;
    flag=1;
    if(n==0 || n==1)
        return flag=0;
    else if(n==2)
        return flag=1;
    else
    {
        l=sqrt(n);
        for(i=2; i<=l+1; i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
        return flag;
    }
}

int main()
{
    long long int i,n,m,l,flag,cnt;
    while(scanf("%lld",&n)==1)
    {
        if(n==0) break;
        cnt=0;
        for(i=n-1;i>=n/2;i--)
        {
            if(IsPrime(i)==1)
            {
                m=n-i;
                if(IsPrime(m)==1)
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

