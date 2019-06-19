#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        unsigned long long int a,b,c;
        a=(n*10)/9;
        b=a-1;
        c=b-(b/10);
        if(c==n)
            cout<<b<<" "<<a<<endl;
        else
            cout<<a<<endl;
    }
    return 0;
}
