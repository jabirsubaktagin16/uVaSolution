#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,k,j,c,s;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        s=0;
        cout<<a<<" "<<b;
        if(a>b)
        {
            k=b;
            b=a;
            a=k;
        }
        for(i=a; i<=b; i++)
        {
            c=1;
            j=i;
            while(j > 1)
            {
                if(j % 2==0)
                    j = j/2;
                else
                    j = (3*j)+1;
                c++;
            }
            if(c>=s)
                s=c;
        }
        cout<<" "<<s<<endl;
    }
    return 0;
}
