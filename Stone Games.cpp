#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    while(scanf("%d",&T)!=EOF)
    {
        if(T==0)
            break;
        long long int x,r=0;
        for(int i=0;i<T;i++)
        {
            cin>>x;
            r^=x;
        }
        if(r!=0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
    return 0;
}
