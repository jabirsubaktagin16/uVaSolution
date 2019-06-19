#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    long long int a;

    while(scanf("%lld",&a)==1)
    {
        if(a==0)
            break;

        T=0;
        while(1)
        {
            while(a!=0)
            {
                T=T+(a%10);
                a=a/10;
            }
            if(T/10==0)
                break;
            else
            {
                a=T;
                T=0;
            }
        }
        cout<<T<<endl;
    }
    return 0;
}
