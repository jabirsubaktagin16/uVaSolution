#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    while(scanf("%d %d",&n,&k)!=EOF && k>1)
    {
        int a=n;
        while(n>=k)
        {
            a=a+(n/k);
            n=(n/k)+(n%k);
        }
        cout<<a<<endl;
    }
    return 0;
}
