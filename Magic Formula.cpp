#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,L,cnt,f;
    while(scanf("%d %d %d %d %d", &a, &b, &c, &d, &L)!=EOF)
    {
        if(a==0 && b==0 && c==0 && d==0 && L==0)
            break;
        cnt=0;
        for(int i=0;i<=L;i++){
            f=(i*i)*a+i*b+c;
            if(f%d==0)
                ++cnt;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
