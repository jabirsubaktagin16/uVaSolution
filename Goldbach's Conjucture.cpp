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
    long long int i,n,sum,l,flag,cnt;
    while(scanf("%lld",&n)==1)
    {
        flag=1;
        sum=0;
        cnt=0;
        if(n==0)
            break;

        for(i=2; i<n; i++)
        {

            l=n-i;
            sum=IsPrime(i);
            cnt=IsPrime(l);
            if (sum==1 && cnt==1)
            {
                cout<<n<<" = "<<i<<" + "<<l<<endl;
                flag=0;
                break;
            }
            else
                continue;
        }
        if(flag==1)
            cout<<"Goldbach's conjecture is wrong."<<endl;
    }
    return 0;
}
