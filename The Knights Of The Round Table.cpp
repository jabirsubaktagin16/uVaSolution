#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,res,r;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        if(a<=0||b<=0||c<=0)
            cout<<"The radius of the round table is: 0.000"<<endl;
        else
        {
            res=(a+b+c)/2;
            r=sqrt((res-a)*(res-b)*(res-c)/res);
            printf("The radius of the round table is: %.3lf\n",r);
        }
    }
    return 0;
}
