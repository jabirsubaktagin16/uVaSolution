#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    while(scanf("%lld %lld", &a, &b) == 2)
    {
        if(a>b)
            cout<<a-b<<endl;
        else
            cout<<b-a<<endl;
    }
    return 0;
}
