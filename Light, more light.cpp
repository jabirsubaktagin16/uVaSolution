#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x,y;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
            break;
        y=sqrt(n);
        x=y*y;
        if(x==n)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
