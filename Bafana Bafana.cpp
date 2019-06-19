#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,a,k,s,p,cs=1;
    cin>>T;
    while(T--)
    {
        cin>>a>>k>>p;
        s=k+p;
        while(s>a)
            s=s-a;
        cout<<"Case "<<cs<<": "<<s<<endl;
        cs++;
    }
    return 0;
}
