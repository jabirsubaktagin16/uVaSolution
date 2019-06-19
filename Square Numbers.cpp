#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,cnt;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==0 && b==0)
            break;
        cnt=0;
        c=0;
        for(int i=a;i<=b;i++)
        {
            c=sqrt(i);
            if(c*c==i)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}


