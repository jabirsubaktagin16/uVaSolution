#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,cs=1;
    cin>>T;
    double C,d;
    while(T--)
    {
        cin>>C>>d;
        C+=(5.0/9.0)*d;
        printf("Case %d: %0.2f\n",cs++,C);
    }
    return 0;
}
