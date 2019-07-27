#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;

int main()
{
    double a,b,c,s,r,rose,sunflower,violet,triangle,R;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        s=(a+b+c)/2;
        triangle=sqrt(s*(s-a)*(s-b)*(s-c));
        r=triangle/s;
        rose=PI*(r*r);
        violet=triangle-rose;
        R=(a*b*c)/(4*triangle);
        sunflower=(PI*R*R)-triangle;

        printf("%.4lf %.4lf %.4lf\n",sunflower,violet,rose);
    }
    return 0;
}
