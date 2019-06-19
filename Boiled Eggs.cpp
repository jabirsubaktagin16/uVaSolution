#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,k,n,p,q,arr[1000],cs=1;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>n>>p>>q;
        for(int i=1;i<=n;i++)
             cin>>arr[i];
        k=0;
        for(int i=1;i<=n && i<=p;i++)
        {
            sum+=arr[i];
            if(sum>q)
                break;
            k++;
        }
        cout<<"Case "<<cs++<<": "<<k<<endl;
    }
    return 0;
}
