#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a<0 && b<0)
            break;
        c=abs(a-b);
        if(c>=50)
            c=100-c;
        cout<<c<<endl;
    }
    return 0;
}
