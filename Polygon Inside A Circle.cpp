#include<bits/stdc++.h>
#define PI 2*acos(0.0)
using namespace std;

int main()
{
    double r,n,area;
    while(scanf("%lf %lf",&r,&n)!=EOF)
    {
        area=0.0;
        area=r*r*n*sin((2*PI)/n)/2;
        printf("%.3lf\n",area);
    }
    return 0;
}
