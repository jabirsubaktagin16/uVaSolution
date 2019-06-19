#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,f;
    long long int x,y,z,sum;
    cin>>T;
    while(T--)
    {
        sum=0;
        cin>>f;
        while(f--)
        {
            cin>>x>>y>>z;
            sum+=x*z;
        }
        cout<<sum<<endl;
    }
    return 0;
}
