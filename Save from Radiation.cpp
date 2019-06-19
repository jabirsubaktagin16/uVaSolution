#include<bits/stdc++.h>
using namespace std;

int rat_count(long long n)
{
    long long res=1;
    int power=0;
    if(n<2)
        return 0;
    while(true)
    {
        res*=2;
        power++;
        if(n<=res)
            return power;
    }
}
int main()
{
    int T,i=1;
    cin>>T;
    while(T--)
    {
        long long n;
        cin>>n;
        n++;
        cout<<"Case "<<i<<": "<<rat_count(n)<<endl;
        i++;
    }
    return 0;
}
