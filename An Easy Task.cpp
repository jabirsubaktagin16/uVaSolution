#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1,a2,b1,b2,c1,c2;
    while(cin>>a1>>b1>>c1>>a2>>b2>>c2)
    {
        if(a1==0 && b1==0 && c1==0 && a2==0 && b2==0 && c2==0)
            break;
        int divisor=a1*b2-a2*b1;
        if(divisor)
        {
            double x,y;
            int res=b2*c1-b1*c2;
            if(res)
                x=res/(double)divisor;
            else
                x=0.0;
            int res2=c2*a1-c1*a2;
            if(res2)
                y=res2/(double)divisor;
            else
                y=0.0;
            printf("The fixed point is at %.2lf %.2lf.\n",x,y) ;
        }
        else
            cout<<"No fixed point exists."<<endl;
    }
    return 0;
}
