#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    while(scanf("%d",&n)!=EOF)
    {
        x=n;
        while(n>=3)
        {
            x=x+(n/3);
            n=(n/3)+(n%3);
        }
        if(n==2)
            x++;
        cout<<x<<endl;
    }
    return 0;
}
