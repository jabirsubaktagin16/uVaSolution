#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,cs=1;
    cin>>T;
    long long int d1,m1,y1,d2,m2,y2;
    while(T--)
    {
        long long int k=0;
        scanf("%lld/%lld/%lld",&d1,&m1,&y1);
        scanf("%lld/%lld/%lld",&d2,&m2,&y2);
        k=(y1-y2);
        if(m1<m2)
            k--;
        else if(m1==m2)
        {
            if(d1<d2)
                k--;
        }
        cout<<"Case #"<<cs<<": ";
        if(k<0)
            printf("Invalid birth date\n");
        else if(k>130)
            printf("Check birth date\n");
        else
            printf("%lld\n",k);
        cs++;
    }
    return 0;
}
