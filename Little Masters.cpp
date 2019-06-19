#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,x,y,r;
    float X,Y;
    cin>>T;
    while(T--)
    {
        cin>>x>>y>>r;
        X=r-sqrt(x*x+y*y);
        Y=r+sqrt(x*x+y*y);
        printf("%.2f %.2f\n",X,Y);
    }
    return 0;
}
