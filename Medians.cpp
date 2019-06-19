#include<bits/stdc++.h>
using namespace std;

int main()
{
    double m1,m2,m3,area,s,mul;
    while(scanf("%lf %lf %lf",&m1,&m2,&m3)!=EOF)
    {
        mul=0.0;
            s=0.0;
        area=0.0;
        s=(m1+m2+m3)/2.0;
        mul=s*(s-m1)*(s-m2)*(s-m3);
        if(mul<=0)
        {
            area=-1.0;
            printf("%.3lf\n",area);
        }
        else
        {
            area=(4/3.0)*sqrt(mul);
            printf("%.3lf\n",area);
        }
    }
    return 0;
}
