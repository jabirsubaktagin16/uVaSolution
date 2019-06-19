#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int res,a,b,c,d,e;
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e)!=EOF)
    {
        res=0;
        if(a==0 && b==0 && c==0 && d==0 && e==0)
            break;
        res=a*b*c*d*d*e*e;
        cout<<res<<endl;
    }
    return 0;
}
