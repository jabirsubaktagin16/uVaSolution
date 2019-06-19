#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c,d,e,f,g,h,i,j;
    //char a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],
    //g[1000],h[1000],i[1000],j[1000];
    int n,k[1000],maximum,t=1;
    while(scanf("%d",&n)!=EOF)
    {
        while(n--)
        {
            cin>>a>>k[0];
            cin>>b>>k[1];
            cin>>c>>k[2];
            cin>>d>>k[3];
            cin>>e>>k[4];
            cin>>f>>k[5];
            cin>>g>>k[6];
            cin>>h>>k[7];
            cin>>i>>k[8];
            cin>>j>>k[9];
            maximum=0;
            for(int p=0;p<10;p++)
            {
                if(k[p]>maximum)
                    maximum=k[p];
            }
            cout<<"Case #"<<t++<<":"<<endl;
            for(int p=0;p<10;p++)
            {
                if(k[p]==maximum)
                {
                    if(p==0)
                        cout<<a<<endl;
                    if(p==1)
                        cout<<b<<endl;
                    if(p==2)
                        cout<<c<<endl;
                    if(p==3)
                        cout<<d<<endl;
                    if(p==4)
                        cout<<e<<endl;
                    if(p==5)
                        cout<<f<<endl;
                    if(p==6)
                        cout<<g<<endl;
                    if(p==7)
                        cout<<h<<endl;
                    if(p==8)
                        cout<<i<<endl;
                    if(p==9)
                        cout<<j<<endl;
                }
            }
        }
    }
    return 0;
}
