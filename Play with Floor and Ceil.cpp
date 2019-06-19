#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,p,q,x,k;
    cin>>T;
    while(T--)
    {
        cin>>x>>k;
        q=x%k;
        if(x>=k)
            p=(x - q) / (x / k) - q;
        else
            p=0;
        cout<<p<<" "<<q<<endl;
    }
    return 0;
}
