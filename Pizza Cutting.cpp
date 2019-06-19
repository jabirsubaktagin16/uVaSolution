#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,res;
    while(scanf("%ld",&n)!=EOF)
    {
        if( n>=0 && n<=210000000)
        {
            res= ((n*(n+1))/2)+1;
            cout<<res<<endl;
        }
        else if(n<0)
            break;
    }
    return 0;
}
