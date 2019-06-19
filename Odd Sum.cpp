#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,a,b,sum,j=1;
    cin>>T;
    while(T--)
    {
        cin>>a>>b;
        sum=0;
        for(int i=a;i<=b;i++)
        {
            if(i%2!=0)
                sum+=i;
        }
        cout<<"Case "<<j<<": "<<sum<<endl;
        j++;
    }
    return 0;
}
