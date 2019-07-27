#include<bits/stdc++.h>
using namespace std;

int fact[12];
int n;
void build()
{
    fact[0]=fact[1]=1;
    for(int i=2;i<=10;i++)
    {
        fact[i]=fact[i-1]*i;
    }
}
int main()
{
    build();
    while(scanf("%d",&n)!=EOF)
    {
        int ans=0;
        for(int i=8;i>=0;i--)
        {
            while(n>=fact[i])
            {
                ans++;
                n-=fact[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
