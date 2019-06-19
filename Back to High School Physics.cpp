#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,v,t;
    while(scanf("%d %d", &v, &t) == 2)
    {
        if(v==0||t==0)
            cout<<0<<endl;
        else{
           s=2*v*t;
           cout<<s<<endl;
        }
    }
    return 0;
}
