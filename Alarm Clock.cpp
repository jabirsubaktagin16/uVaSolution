#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h1,m1,h2,m2,w1,w2;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)!=EOF)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
        w1=(h1*60)+m1;
        w2=(h2*60)+m2;
        if(w2<w1)
            w2=w2+1440;
        cout<<w2-w1<<endl;
    }
    return 0;
}
