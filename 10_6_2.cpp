#include<bits/stdc++.h>
#define PI 2*acos(0.0)
using namespace std;

int main()
{
    int T;
    double b,c,r,h,g,n;
    cin>>T;
    while(T--)
    {
        r=0;
        cin>>n;
        r=n/5;
        h=(n*6)/10;
        r=PI*r*r;
        g=(n*h)-r;
        printf("%.2lf %.2lf\n",r,g);
    }
    return 0;
}
